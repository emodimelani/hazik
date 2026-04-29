#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define VERSION "1.0.0"

const char* C_CODE = 
    "#include <stdio.h>\n\n"
    "int main() {\n"
    "    printf(\"Hello, World!\\n\");\n"
    "    return 0;\n"
    "}\n";

const char* BASH_CODE = 
    "#!/bin/bash\n\n"
    "echo \"Hello, World!\"\n";

const char* PY_CODE = 
    "def main():\n"
    "    print(\"Hello, World!\")\n\n"
    "if __name__ == \"__main__\":\n"
    "    main()\n";

const char* JAVA_CODE = 
    "public class Main {\n"
    "    public static void main(String[] args) {\n"
    "        System.out.println(\"Hello, World!\");\n"
    "    }\n"
    "}\n";


void print_help() {
    printf("Használat: alap <sablon_id> [opció]\n\n");
    printf("Elérhető opciók:\n");
    printf("  -h, --help      Megjeleníti ezt a súgót\n");
    printf("  -v, --version   Verzióinformáció\n");
    printf("  --stdout        Nem hoz létre fájlt, a terminálra ír\n\n");
    printf("Elérhető sablonok:\n");
    printf("  * c      - C forráskód [main.c]\n");
    printf("  * sh     - Bash szkript [main.sh]\n");
    printf("  * py     - Python kód [main.py]\n");
    printf("  * java   - Java forráskód [Main.java]\n");
}

void generate_output(const char* content, const char* filename, bool to_stdout) {
    if (to_stdout) {
        printf("%s", content);
    } else {
        FILE *f = fopen(filename, "w");
        if (f == NULL) {
            perror("Hiba a fájl létrehozásakor");
            return;
        }
        fprintf(f, "%s", content);
        fclose(f);
        printf("[INFO] Fájl létrehozva: %s\n", filename);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        print_help();
        return 1;
    }

    bool to_stdout = false;
    char *template_id = NULL;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            print_help();
            return 0;
        } else if (strcmp(argv[i], "-v") == 0 || strcmp(argv[i], "--version") == 0) {
            printf("alap verzió: %s\n", VERSION);
            return 0;
        } else if (strcmp(argv[i], "--stdout") == 0) {
            to_stdout = true;
        } else {
            template_id = argv[i];
        }
    }

    if (template_id == NULL) {
        fprintf(stderr, "Hiba: Nem adtál meg sablont!\n");
        return 1;
    }

    
    if (strcmp(template_id, "c") == 0) {
        generate_output(C_CODE, "main.c", to_stdout);
    } else if (strcmp(template_id, "sh") == 0) {
        generate_output(BASH_CODE, "main.sh", to_stdout);
    } else if (strcmp(template_id, "py") == 0) {
        generate_output(PY_CODE, "main.py", to_stdout);
    } else if (strcmp(template_id, "java") == 0) {
        generate_output(JAVA_CODE, "Main.java", to_stdout);
    } else {
        printf("Ismeretlen sablon: %s\n", template_id);
        return 1;
    }

    return 0;
}