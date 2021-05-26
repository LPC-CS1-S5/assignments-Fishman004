#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
  
  string userinput;
  cin >> userinput;
  string cd = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quibus natura iure responderit non esse verum aliunde finem beate vivendi, a se principia rei gerendae peti; Quae enim adhuc protulisti, popularia sunt, ego autem a te elegantiora desidero. Duo Reges: constructio interrete. Tum Lucius: Mihi vero ista valde probata sunt, quod item fratri puto. Bestiarum vero nullum iudicium puto. Nihil enim iam habes, quod ad corpus referas; Deinde prima illa, quae in congressu solemus: Quid tu, inquit, huc? Et homini, qui ceteris animantibus plurimum praestat, praecipue a natura nihil datum esse dicemus?";

  cout << "Enter user string "; 
  char cr[2];
  cr[2] = userinput;
  char * pch;
  
  pch = strchr(cd, cr);
  while (pch!=NULL){
    printf ("Found %d at %i\n", cr, pch-cd+1);
    pch = strchr(pch+1, cr);
  }
  
    



}