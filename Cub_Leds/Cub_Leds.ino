/*************************************************************************
**                                                                      **
**                 Descripció programa                                  **
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************

const int col[9] = {13, 12, 11, 10, 9, 8, 7, 6, 5};
const int pis[3] = {4, 3, 2};

//*******  Setup  ********************************************************
void setup()
{
  pinMode(col[0], OUTPUT);
  pinMode(col[1], OUTPUT);
  pinMode(col[2], OUTPUT);
  pinMode(col[3], OUTPUT);
  pinMode(col[4], OUTPUT);
  pinMode(col[5], OUTPUT);
  pinMode(col[6], OUTPUT);
  pinMode(col[7], OUTPUT);
  
  pinMode(pis[0], OUTPUT);
  pinMode(pis[1], OUTPUT);
  pinMode(pis[2], OUTPUT);
}

//******  Loop  **********************************************************
void loop ()
{
 
}
