/*********************************************************************************************
**                                                                                          **
**                                 Blink / Parpellejar                                      ** 
** S'encén un LED durant un segon, després s'apaga durant un segon, en repetides ocasions.  **
**                                                                                          **
*********************************************************************************************/


//**********  Variables  *********************************************************************
int ledPin=13;


// La funció de setup s'executa un cop al prémer reinici o el tauler
void setup(){
  // Inicialitzar pin digital 13 com una sortida.
    pinMode(ledPin, OUTPUT);
}


// La funció de loop s'executa una vegada i una altra per sempre
void loop(){
  digitalWrite(ledPin, HIGH);    // Encén el LED ( ALTA és el nivell de tensió )
  delay(1000);               // Esperar un segon
  digitalWrite(ledPin, LOW);     // Apagar el LED fent que la tensió BAIXA
  delay(1000);               // Esperar un segon
}
