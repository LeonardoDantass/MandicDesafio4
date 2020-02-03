#define BUFF_SIZE 256
#include <stdio.h>
#include <string.h>
void print(char* string) {
    int len = strlen(string);
    int ind, ctr;
    char ptr;
    for(ind = 0; ind < 3; ++ind) {
        for(ctr = 0; ctr < len; ++ctr) {
            ptr = string[ctr];
            switch(ptr) {
            case 'A':
                switch(ind) {
                case 0:
                    printf(" /\\ ");
                    break;
                case 1:
                    printf("/~~\\ ");
                    break;
                case 2:
                    printf("      ");
                    break;
                default:
                    break;
                }
                break;
            case 'B':
                switch(ind) {
                case 0:
                    printf(" __ ");
                    break;
                case 1:
                    printf("|__)");
                    break;
                case 2:
                    printf("|__)");
                    break;
                
                default:
                    break;
                }
                break;
            case 'C':
                switch(ind) {
                case 0:
                    printf(" __ ");
                    break;
                case 1:
                    printf("/  ` ");
                    break;
                case 2:
                    printf("\\__, ");
                    break;
                default:
                    break;
                }
                break;
            case 'D':
                switch(ind) {
                case 0:
                    printf(" __  ");
                    break;
                case 1:
                    printf("|  \\ ");
                    break;
                case 2:
                    printf("|__/ ");
                    break;
                default:
                    break;
                }
                break;
            case 'E':
                switch(ind) {
                case 0:
                    printf(" ___ ");
                    break;
                case 1:
                    printf("|__  ");
                    break;
                case 2:
                    printf("|___ ");
                    break; 
                
                default:
                    break;
                }
                break;
            case 'F':
                switch(ind) {
                case 0:
                    printf(" ___ ");
                    break;
                case 1:
                    printf("|__  ");
                    break;
                case 2:
                    printf("|    ");
                    break;

                default:
                    break;
                }
                break;
            case 'G':
                switch(ind) {
                case 0:
                    printf(" __   ");
                    break; 
                case 1:
                    printf("/ _`  ");
                    break;
                case 2:
                    printf("\\__> ");
                    break;
    
                default:
                    break;
                }
                break;
            case 'H':
                switch(ind) {
                case 0:
                    printf("|__| ");
                    break;
                case 1:
                    printf("|  | ");
                    break;
                case 2:
                    printf("     ");
                    break;
                default:
                    break;
                }
                break;
            case 'I':
                switch(ind) {
                case 0:
                    printf(" | ");
                    break;
                case 1:
                    printf(" | ");
                    break;
                case 2:
                    printf("   ");
                    break;  
                default:
                    break;
                }
                break;
            case 'J':
                switch(ind) {
                case 0:
                    printf("    | ");
                    break;
                case 1:
                    printf("\\__/ ");
                    break;
                case 2:
                    printf("      ");
                    break;
                default:
                    break;
                }
                break;
            case 'K':
                switch(ind) {
                case 0:
                    printf("|__/ ");
                    break;
                case 1:
                    printf("|  \\ ");
                    break;
                case 2:
                    printf("      ");
                    break; 
                default:
                    break;
                }
                break;
            case 'L':
                switch(ind) {
                case 0:
                    printf("|    ");
                    break;
                case 1:
                    printf("|___ ");
                    break;
				case 2:
                    printf("     ");
                    break;
                default:
                    break;
                }
                break;
            case 'M':
                switch(ind) {
                case 0:
                    printf("|\\/|");
                    break;
                case 1:
                    printf("|  | ");
                    break;
               case 2:
                    printf("     ");
                    break;
                default:
                    break;
                }
                break;
            case 'N':
                switch(ind) {
                case 0: 
                    printf("|\\ | ");
                    break;
                case 1:
                    printf("| \\| ");
                    break;
            	case 2:
                    printf("      ");
                    break;
                default:
                    break;
                }
                break;
            case 'O':
                switch(ind) {
                case 0:
                    printf(" __  ");
                    break; 
                case 1:
                    printf("/  \\ ");
                    break;
                case 2:
                    printf("\\__/ ");
                    break;
                
                default:
                    break;
                }
                break;
            case 'P':
                switch(ind) {
                case 0:
                    printf(" __ ");
                    break;
                case 1:
                    printf("|__) ");
                    break;
                case 2:
                    printf("|    ");
                    break;
                default:
                    break;
                }
                break;
            case 'Q':
                switch(ind) {
                case 0:
                    printf(" __   ");
                    break;
                case 1:
                    printf("/  \\ ");
                    break;
                case 2:
                    printf("\\__X ");
                    break;
                
                default:
                    break;
                }
                break;
            case 'R':
                switch(ind) {
                case 0:
                    printf(" __  ");
                    break;
                case 1:
                    printf("|__) ");
                    break;
                case 2:
                    printf("|  \\ ");
                    break;
    
                default:
                    break;
                }
                break;
            case 'S':
                switch(ind) {
                case 0:
                    printf(" __ ");
                    break;
                case 1:
                    printf("/__` ");
                    break;
                case 2:
                    printf(".__/ ");
                    break;
                
                default:
                    break;
                }
                break;
            case 'T':
                switch(ind) {
                case 0:
                    printf(" ___ ");
                    break;
                case 1:
                    printf("  | ");
                    break;
                case 2:
                    printf("  | ");
                    break;
                
                default:
                    break;
                }
                break;
            case 'U':
                switch(ind) {
                case 0:
                    printf("|  | ");
                    break;
                case 1:
                    printf("\\__/ ");
                    break;
                case 2:
                    printf("      ");
                    break;
                default:
                    break;
                }
                break;
            case 'V':
                switch(ind) {
                case 0:
                    printf("\\  / ");
                    break;
                case 1:
                    printf(" \\/  ");
                    break;
            	case 2:
                    printf("      ");
                    break;
                default:
                    break;
                }
                break;
            case 'W':
                switch(ind) {
                case 0:
                    printf(" |  |  ");
                    break;
                case 1:
                    printf(" |/\\| ");
                    break;
                case 2:
                    printf("       ");
                    break;
                default:
                    break;
                }
                break;
            case 'X':
                switch(ind) {
                case 0:
                    printf(" \\_/ ");
                    break;
                case 1:
                    printf(" / \\ ");
                    break;
                case 2:
                    printf("      ");
                    break;
                default:
                    break;
                }
                break;
            case 'Y':
                switch(ind) {
                case 0:
                    printf(" \\ / ");
                    break;
                case 1:
                    printf("  |  ");
                    break;
                case 2:
                    printf("     ");
                    break;
                default:
                    break;
                }
                break;
            case 'Z':
                switch(ind) {
                case 0:
                    printf("  __  ");
                    break;
                case 1:
                    printf("  /  ");
                    break;
                case 2:
                    printf("  /_  ");
                    break;
                default:
                    break;
                }
                break;
            default:
                break;
            }
        }
        printf("\n");
    }
    printf("\n");
}
void print(char* string);

int main(int argc, char *argv[]) {

    if (argc > 1) {

        char text[BUFF_SIZE] = {0};

        int n = 1;
        while (n < argc) {
            strcat(text, argv[n]);
            strcat(text, " ");
            n++;
        }

        n = 0;
        char ptr;
        while(text[n]) {
            ptr = text[n];
            text[n] = (toupper(ptr));
            n++;
        }

        print(text);

    } else {
        printf("\n Digite o texto a ser convertido \n");
        char text[BUFF_SIZE];
        fgets(text, sizeof(text), stdin);
        int i = 0;
        char ptr;
        while(text[i]) {
            ptr = text[i];
            text[i] = (toupper(ptr));
            ++i;
        }
        print(text);
    }
    return(0);
}
