//Lo primero es indentitifcar cada pin con su conrrespondiente salida en el arduino

void setup ( ) {
pinMode ( 7 , OUTPUT) ;
pinMode ( 6 , OUTPUT) ;
pinMode ( 5 , OUTPUT) ;
}

//Le damos la orden a la programación para que encienca una luz, espere 5 seg, luego la otra luz que espere 5 seg y finalmente la última

void loop ( ) {
digitalWrite(7, HIGH) ;
delay (500) ;
digitalWrite (7, LOW) ;
delay (500) ;
digitalWrite (6 ,HIGH) ;
delay (500) ;
digitalWrite(6 ,LOW) ;
delay (500) ;
digitalWrite (5, HIGH) ;
delay (500) ;
digitalWrite (5, LOW) ;
delay (500) ;
}
