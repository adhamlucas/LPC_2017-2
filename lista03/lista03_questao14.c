main(){
  int i = 5, *p;

  p = &i;
  printf("%x %d %d %d %d \n", p , *p+2, **&p, 3**p, **&p+4);
}

/*
  14)
    Será impresso:
      4094 7 5 15 9
*/
