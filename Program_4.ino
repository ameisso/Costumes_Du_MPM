void program4AtStep(int step)//4)
{
  //Sequence alumage court metrage 
  //fixe full blanc 
   if (step < 3000)//allumage blanc
  {
    if( step < 450)
    {
      if(step < 150)
      {
        setColorForPatchInMember(CRGB::White, 3, leftLeg);
        setColorForPatchInMember(CRGB::White, 3, rightLeg);
        setColorForPatchInMember(CRGB::White, 2, leftLeg);
        setColorForPatchInMember(CRGB::White, 2, rightLeg);
      }
      else if(step >= 150 && step < 350)
      {
        setColorForPatchInMember(CRGB::Black, 3, leftLeg);
        setColorForPatchInMember(CRGB::Black, 3, rightLeg);
        setColorForPatchInMember(CRGB::Black, 2, leftLeg);
        setColorForPatchInMember(CRGB::Black, 2, rightLeg);
      }
      else if(step >= 350 && step < 400)
      {
        setColorForPatchInMember(CRGB::White, 3, leftLeg);
        setColorForPatchInMember(CRGB::White, 3, rightLeg);
        setColorForPatchInMember(CRGB::White, 2, leftLeg);
        setColorForPatchInMember(CRGB::White, 2, rightLeg);
      }
      else if(step >= 400 && step < 450)
      {
        setColorForPatchInMember(CRGB::Black, 3, leftLeg);
        setColorForPatchInMember(CRGB::Black, 3, rightLeg);
        setColorForPatchInMember(CRGB::Black, 2, leftLeg);
        setColorForPatchInMember(CRGB::Black, 2, rightLeg);
      }
      else
      {
        setColorForPatchInMember(CRGB::White, 3, leftLeg);
        setColorForPatchInMember(CRGB::White, 3, rightLeg);
        setColorForPatchInMember(CRGB::White, 2, leftLeg);
        setColorForPatchInMember(CRGB::White, 2, rightLeg);
      }
    }
    else if(step >= 600 && step < 900)
    {
      if(step < 650)
      {
        setColorForPatchInMember(CRGB::White, 3, leftLeg);
        setColorForPatchInMember(CRGB::White, 3, rightLeg);
        setColorForPatchInMember(CRGB::White, 2, leftLeg);
        setColorForPatchInMember(CRGB::White, 2, rightLeg);
        setColorForPatchInMember(CRGB::White, 1, leftLeg);
        setColorForPatchInMember(CRGB::White, 1, rightLeg);
        setColorForPatchInMember(CRGB::White, 0, leftLeg);
        setColorForPatchInMember(CRGB::White, 0, rightLeg);
      }
      else if(step >= 650 && step < 800)
      {
        setColorForPatchInMember(CRGB::Black, 3, leftLeg);
        setColorForPatchInMember(CRGB::Black, 3, rightLeg);
        setColorForPatchInMember(CRGB::Black, 2, leftLeg);
        setColorForPatchInMember(CRGB::Black, 2, rightLeg);
        setColorForPatchInMember(CRGB::Black, 1, leftLeg);
        setColorForPatchInMember(CRGB::Black, 1, rightLeg);
        setColorForPatchInMember(CRGB::Black, 0, leftLeg);
        setColorForPatchInMember(CRGB::Black, 0, rightLeg);
      }
      else if(step >= 800 && step < 850)
      {
        setColorForPatchInMember(CRGB::White, 3, leftLeg);
        setColorForPatchInMember(CRGB::White, 3, rightLeg);
        setColorForPatchInMember(CRGB::White, 2, leftLeg);
        setColorForPatchInMember(CRGB::White, 2, rightLeg);
        setColorForPatchInMember(CRGB::White, 1, leftLeg);
        setColorForPatchInMember(CRGB::White, 1, rightLeg);
        setColorForPatchInMember(CRGB::White, 0, leftLeg);
        setColorForPatchInMember(CRGB::White, 0, rightLeg);
      }
      else if(step >= 850 && step < 875)
      {
        setColorForPatchInMember(CRGB::Black, 3, leftLeg);
        setColorForPatchInMember(CRGB::Black, 3, rightLeg);
        setColorForPatchInMember(CRGB::Black, 2, leftLeg);
        setColorForPatchInMember(CRGB::Black, 2, rightLeg);
        setColorForPatchInMember(CRGB::Black, 1, leftLeg);
        setColorForPatchInMember(CRGB::Black, 1, rightLeg);
        setColorForPatchInMember(CRGB::Black, 0, leftLeg);
        setColorForPatchInMember(CRGB::Black, 0, rightLeg);
      }
      else
      {
        setColorForPatchInMember(CRGB::White, 3, leftLeg);
        setColorForPatchInMember(CRGB::White, 3, rightLeg);
        setColorForPatchInMember(CRGB::White, 2, leftLeg);
        setColorForPatchInMember(CRGB::White, 2, rightLeg);
        setColorForPatchInMember(CRGB::White, 1, leftLeg);
        setColorForPatchInMember(CRGB::White, 1, rightLeg);
        setColorForPatchInMember(CRGB::White, 0, leftLeg);
        setColorForPatchInMember(CRGB::White, 0, rightLeg);
      }
    }
    else if(step >= 900 && step < 1500)
    {
      if(step < 950)
      {
        setColorForPatchInMember(CRGB::White, 3, leftArm);
        setColorForPatchInMember(CRGB::White, 3, rightArm);
        setColorForPatchInMember(CRGB::White, 2, leftArm);
        setColorForPatchInMember(CRGB::White, 2, rightArm);
        setColorForPatchInMember(CRGB::White, 1, leftArm);
        setColorForPatchInMember(CRGB::White, 1, rightArm);
        setColorForPatchInMember(CRGB::White, 0, leftArm);
        setColorForPatchInMember(CRGB::White, 0, rightArm);
      }
      else if(step >= 950 && step < 1100)
      {
        setColorForPatchInMember(CRGB::Black, 3, leftArm);
        setColorForPatchInMember(CRGB::Black, 3, rightArm);
        setColorForPatchInMember(CRGB::Black, 2, leftArm);
        setColorForPatchInMember(CRGB::Black, 2, rightArm);
        setColorForPatchInMember(CRGB::Black, 1, leftArm);
        setColorForPatchInMember(CRGB::Black, 1, rightArm);
        setColorForPatchInMember(CRGB::Black, 0, leftArm);
        setColorForPatchInMember(CRGB::Black, 0, rightArm);
      }
      else if(step >= 1100 && step < 1250)
      {
        setColorForPatchInMember(CRGB::White, 3, leftArm);
        setColorForPatchInMember(CRGB::White, 3, rightArm);
        setColorForPatchInMember(CRGB::White, 2, leftArm);
        setColorForPatchInMember(CRGB::White, 2, rightArm);
        setColorForPatchInMember(CRGB::White, 1, leftArm);
        setColorForPatchInMember(CRGB::White, 1, rightArm);
        setColorForPatchInMember(CRGB::White, 0, leftArm);
        setColorForPatchInMember(CRGB::White, 0, rightArm);
      }
      else if(step >= 1250 && step < 1400)
      {
        setColorForPatchInMember(CRGB::Black, 3, leftArm);
        setColorForPatchInMember(CRGB::Black, 3, rightArm);
        setColorForPatchInMember(CRGB::Black, 2, leftArm);
        setColorForPatchInMember(CRGB::Black, 2, rightArm);
        setColorForPatchInMember(CRGB::Black, 1, leftArm);
        setColorForPatchInMember(CRGB::Black, 1, rightArm);
        setColorForPatchInMember(CRGB::Black, 0, leftArm);
        setColorForPatchInMember(CRGB::Black, 0, rightArm);
      }
      else
      {
        setColorForPatchInMember(CRGB::White, 3, leftArm);
        setColorForPatchInMember(CRGB::White, 3, rightArm);
        setColorForPatchInMember(CRGB::White, 2, leftArm);
        setColorForPatchInMember(CRGB::White, 2, rightArm);
        setColorForPatchInMember(CRGB::White, 1, leftArm);
        setColorForPatchInMember(CRGB::White, 1, rightArm);
        setColorForPatchInMember(CRGB::White, 0, leftArm);
        setColorForPatchInMember(CRGB::White, 0, rightArm);
      }
    }
    else if(step >= 1500 && step < 3000)
    {
      if(step >= 1500 && step < 1600)
      {
        setColorForRib (CRGB::Black,  0);
        setColorForRib (CRGB::Black,  1);
        setColorForRib (CRGB::Black,  2);
        setColorForRib (CRGB::Black,  3);
        setColorForRib (CRGB::Black,  4);
        setColorForRib (CRGB::Black,  5);
      }
      else if(step >= 1600 && step < 1700)
      {
        setColorForRib (CRGB::White, 0);
      }
      else if(step >= 1700 && step < 1750)
      {
        setColorForRib (CRGB::Black, 0);
      }
      else if(step >= 1750 && step < 1850)
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::White, 1);
      }
      else if(step >= 1850 && step < 1900)
      {
        setColorForRib (CRGB::Black, 0);
        setColorForRib (CRGB::White, 1);
      }
      else if(step >= 1900 && step < 1950)
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::White, 1);
      }
      else if(step >= 1950 && step < 2000)
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::Black, 1);
        setColorForRib (CRGB::White, 2);
      }
      else if(step >= 2000 && step < 2100)
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::White, 1);
        setColorForRib (CRGB::Black, 2);
      }
      else if(step >= 2100 && step < 2200)
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::White, 1);
        setColorForRib (CRGB::White, 2);
      }
      else if(step >= 2200 && step < 2400)
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::White, 1);
        setColorForRib (CRGB::Black, 2);
        setColorForRib (CRGB::White, 3);
      }
      else if(step >= 2400 && step < 2500)
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::White, 1);
        setColorForRib (CRGB::Black, 2);
        setColorForRib (CRGB::Black, 3);
      }
      else if(step >= 2400 && step < 2500)
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::White, 1);
        setColorForRib (CRGB::White, 2);
        setColorForRib (CRGB::White, 3);
      }
      else if(step >= 2500 && step < 2600)
      {
        setColorForRib (CRGB::White, 4);
        setColorForCollumn (CRGB::White);
      }
      else if(step >= 2600 && step < 2700)
      {
        setColorForRib (CRGB::Black, 4);
        setColorForRib (CRGB::White, 5);
      }
      else if(step >= 2700 && step < 2850)
      {
        setColorForRib (CRGB::White, 4);
        setColorForRib (CRGB::Black, 5);
      }
      else if(step >= 2850 && step < 2900)
      {
        setColorForRib (CRGB::White, 4);
        setColorForRib (CRGB::Black, 5);
      }
      else
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::White, 1);
        setColorForRib (CRGB::White, 2);
        setColorForRib (CRGB::White, 3);
        setColorForRib (CRGB::White, 4);
        setColorForRib (CRGB::White, 5);
      }
    }
    //Serial.println("white"+String(step));
  }
  FastLED.show();
}


//bleu


