/******************************************************************************
 * notes of the melody followed by the duration.                              *
 * a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on            *
 * !!negative numbers are used to represent dotted notes,                     *
 * so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!! *
 ******************************************************************************/ 

// change this to make the song slower or faster
int tempo = 140;

int melody[] = {
  // Happy Birthday
  NOTE_C4,4, NOTE_C4,8, // 1
  NOTE_D4,-4, NOTE_C4,-4, NOTE_F4,-4, //2
  NOTE_E4,-2, NOTE_C4,4, NOTE_C4,8, //3
  NOTE_D4,-4, NOTE_C4,-4, NOTE_G4,-4, //4
  NOTE_F4,-2, NOTE_C4,4, NOTE_C4,8, //5
  NOTE_C5,-4, NOTE_A4,-4, NOTE_F4,-4, //6
  NOTE_E4,-4, NOTE_D4,-4, NOTE_AS4,4, NOTE_AS4,8, //7
  NOTE_A4,-4, NOTE_F4,-4, NOTE_G4,-4, //8
  NOTE_F4,-2 //9
};
