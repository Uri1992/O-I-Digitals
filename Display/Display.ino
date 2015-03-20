/*************************************************************************
**                                                                      **
**                 Descripció programa                                  **
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************

const int llum[8] = {12, 11, 10, 9, 8, 7, 6, 5};

//*******  Setup  ********************************************************
void setup()
{
  pinMode(llum[0], OUTPUT);
  pinMode(llum[1], OUTPUT);
  pinMode(llum[2], OUTPUT);
  pinMode(llum[3], OUTPUT);
  pinMode(llum[4], OUTPUT);
  pinMode(llum[5], OUTPUT);
  pinMode(llum[6], OUTPUT);
  pinMode(llum[7], OUTPUT);
}


//******  Loop  **********************************************************
void loop ()
{
 digitalWrite(llum[1], HIGH); 
}
  
  
