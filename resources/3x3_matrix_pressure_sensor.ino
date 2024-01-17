int vertPin1 = A1;
int vertPin2 = A0;
int horPin1 = 8;
int horPin2 = 9;

int vertVal1 = 0 ;
int vertVal2 = 0 ;
int vertVal3 = 0 ;
int vertVal4 = 0 ;

void setup(){
  Serial.begin(9600);
  pinMode(horPin1, OUTPUT);
  pinMode(horPin2, OUTPUT);
}

void loop(){
  digitalWrite(horPin1,HIGH); //write horizontal line 1 high
  readRow1VertValues(); // read all vert vales for horiz line 1
  int values [] = {horPin1,horPin2};
  digitalWrite(horPin1,LOW);
  digitalWrite(horPin2,HIGH);
  readRow2VertValues(); // read all vert vales for horiz line 2
  digitalWrite(horPin2,LOW);
  Serial.println();
}

void readRow1VertValues(){
  vertVal1 = analogRead(vertPin1);
  Serial.print(" ");
  Serial.print("Row1Col1");
  Serial.print(" ");
  Serial.print(vertVal1);
  vertVal2 = analogRead(vertPin2);
  Serial.print(" ");
  Serial.print("Row1Col2");
  Serial.print(" ");
  Serial.print(vertVal2);
  Serial.println();

}

void readRow2VertValues(){
  vertVal3 = analogRead(vertPin1);
  Serial.print(" ");
  Serial.print("Row2Col1");
  Serial.print(" ");
  Serial.print(vertVal3);
  vertVal4 = analogRead(vertPin2);
  Serial.print(" ");
  Serial.print("Row2Col2");
  Serial.print(" ");
  Serial.print(vertVal4);
  Serial.println();

}
