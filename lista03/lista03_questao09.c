main(){
  int i, j, *p_1, *p_2, **p_3, ***p_4;
  i = 4;
  j = 5;
  p_1 = &j;
  p_2 = &i;
  p_3 = &p_1;
  p_4 = &p_3;
}
/*
  Tabela A

  Nome variável    i      j     p_1     p_2     p_3     p_4
  Conteúdo         4      5    1007    1000    1030    1071
  Endereço       1000   1007   1030    1053    1071    1079
*/

/*
  Tabela B

  Expressão  i    *p_2    &j     &p_2   **p_3  **p_4   ***p_4  *p_1   *&p_2   *p_4
  Resultado  4     4     1007    1053      5    1007      5      5     1000   1030
*/
