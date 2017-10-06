  #include <stdio.h>

  int compare_strings(char string1[], char string2[], int i);

  int main(){
    char string1[100], string2[100];
    int bol, i = 0;

    printf("Digite a primeira string: ");
    scanf("%s", string1);
    printf("Digite a segunda string: ");
    scanf("%s", string2);

    bol = compare_strings(string1, string2, i);

    printf("%i\n", bol);

    return 0;
  }

  int compare_strings(char string1[], char string2[], int i){
      if(string1[i] == '\0' && string2[i] == '\0')
          return 1;

      if(string1[i] != string2[i])
        return 0;

      else
        return (compare_strings(string1, string2, i + 1));
  }
