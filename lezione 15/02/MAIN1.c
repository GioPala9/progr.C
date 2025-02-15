#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char c[] = ("01100");
    char buffer[100];

    
    fp = fopen("file.bin", "wb+");
    if (fp == NULL) {
        perror("Impossibile aprire il file");
        return 0;
    }

    
    fwrite(c, sizeof(char), strlen(c) + 1, fp);

    
    fseek(fp, 0, SEEK_SET);

    
    fread(buffer, sizeof(char), strlen(c) + 1, fp);
    printf("%s\n", buffer);

    fclose(fp);
    return 0;
}