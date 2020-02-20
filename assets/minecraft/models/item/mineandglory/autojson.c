#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char chemin[101] = "";
    
    strcat(chemin, argv[1]);
    strcat(chemin, ".json");

    FILE* file = fopen(chemin, "w");

    fprintf(file, "{\n\t\"parent\": \"item/generated\",\n\t\"textures\": {\n\t\t\"layer0\": \"item/mineandglory/%s\"\n\t}\n}", argv[1]);
    fclose(file);

    return 0;
}