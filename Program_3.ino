void program3AtStep(int step)//RENCONTRE
{
  //une respiration rouge une deuxieme qui reste bloquée 
  //fondu bleu 

  if(step < 3000)
  {
    setColorForAllPixels(COSTUME_COLOR,step/3000.0*255);
  }
  else if (step >= 3000 && step < 6000)
  {
    setColorForAllPixels(COSTUME_COLOR, map(step,3000,6000,255,0));
  }
  else if (step >= 6000 && step < 10000)
  {
    setColorForAllPixels(CHSV(map(step,6000,1000,0,165), 255, 255),map(step,6000,10000,0,255));
  }

}



//vert















