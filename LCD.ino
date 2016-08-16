/*
Talos Electronics
Rafael Lozano Rolón 
8/Septiembre/2015 
*/

#include <LiquidCrystal.h>

//Definir los pines a utilizar (RS,E,D4,D5,D6,D7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int Contador=0;
void setup() 
{
  //Definir el numero de columnas y filas (Columnas,Filas)
  lcd.begin(16, 2);
  // Mostrar el siguiente Texto (Visita Talos Electronics)
  lcd.print("Visita Talos Electronics");
  lcd.setCursor(0, 2);//llevar el cursor en la columna 0 y fila 2
  lcd.print("    LCD 16X2    ");//mostar el mensaje (    LCD 16X2    )
  delay(1000);//Esperar 1 segundo
}

void loop() 
{
  delay(1500); //Esperar 1 segundo y medio 
  // Desplazar 13 posiciones hacia la izquierda

  for ( Contador = 0; Contador < 13; Contador++) 
  {
  	// Desplazar una posicion a la izquierda 
	lcd.scrollDisplayLeft(); 
	// Esperar medio segundo antes de volver a desplazar una posicion 
	delay(500);
  }

// Desplazar 29 posiciones a la Derecha (13 izquierda + 16 LCD = 29 posiciones)

  for ( Contador = 0; Contador < 29; Contador++) 
  {
    // Desplazar una posicion a la Derecha 
    lcd.scrollDisplayRight(); 
    // Esperar medio segundo antes de volver a desplazar una posicion 
    delay(500);
  }

// Desplazar 16 posiciones a la izquierda para regresar a la posicion original
  for ( Contador = 0; Contador < 16; Contador++) 
  {
    // Desplazar una posicion a la izquierda 
    lcd.scrollDisplayLeft(); 
    // Esperar medio segundo antes de volver a desplazar una posicion 
    delay(500);
  }

  // Esperar 1 segundo antes de volver a repetir todo
  delay(1000);

}

