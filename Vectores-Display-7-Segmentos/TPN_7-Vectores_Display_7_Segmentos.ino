int Numero_0[] = {1,1,1,1,1,1,0};
int Numero_1[] = { 0,1,1,0,0,0,0 }; 
int Numero_2[] = {1,1,0,1,1,0,1};
int Numero_3[] = {1,1,1,1,0,0,1};
int Numero_4[] = {0,1,1,0,0,1,1};
int Numero_5[] = {1,0,1,1,0,1,1};
int Numero_6[] = {1,0,1,1,1,1,1};
int Numero_7[] = { 1,1,1,0,0,0,0 };
int Numero_8[] = {1,1,1,1,1,1,1};
int Numero_9[] = {1,1,1,0,0,1,1};
int a[] = {1,1,1,0,1,1,1};
int c[] = {1,0,0,1,1,1,0};
int d[] = {1,1,1,1,1,1,0};
int e[] = {1,0,0,1,1,1,1};
int f[] = {1,0,0,0,1,1,1};
int h[] = {0,1,1,0,1,1,1};
int peso = {8, 4, 2, 1};
int todos[] = {Numero_0, Numero_1, Numero_2, Numero_3, Numero_4, Numero_5, Numero_6, Numero_7, Numero_8, Numero_9, a, c, d, e, f, h};
int x;
int y;

void setup(){
  for(x = 2; x<6; x++){
    pinMode(x, INPUT);
  }
  for(y = 6; y<13; y++){
    pinMode(x, OUTPUT);
  }
}


void loop(){
  int numbin[4];
 
	numbin[0] = digitalRead( 2 );
  	numbin[1] = digitalRead( 3 );
  	numbin[2] = digitalRead( 4 );
  	numbin[3] = digitalRead( 5 );
  int val = 0
  for(int w = 0; w < 12; w++){
    for(int z = 0; z < 4; z++){
      val = val + (numbin[z] * peso[z]);
    }
    todos[val];
  }
}
