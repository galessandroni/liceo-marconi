/******************************************************************************
 * notes of the melody followed by the duration.                              *
 * a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on            *
 * !!negative numbers are used to represent dotted notes,                     *
 * so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!! *
 ******************************************************************************/ 

// change this to make the song slower or faster
int tempo = 120;

int melody[] = {
  // Pacman
  NOTE_B4, 16, NOTE_B5, 16, NOTE_FS5, 16, NOTE_DS5, 16, //1
  NOTE_B5, 32, NOTE_FS5, -16, NOTE_DS5, 8, NOTE_C5, 16,
  NOTE_C6, 16, NOTE_G6, 16, NOTE_E6, 16, NOTE_C6, 32, NOTE_G6, -16, NOTE_E6, 8,

  NOTE_B4, 16,  NOTE_B5, 16,  NOTE_FS5, 16,   NOTE_DS5, 16,  NOTE_B5, 32,  //2
  NOTE_FS5, -16, NOTE_DS5, 8,  NOTE_DS5, 32, NOTE_E5, 32,  NOTE_F5, 32,
  NOTE_F5, 32,  NOTE_FS5, 32,  NOTE_G5, 32,  NOTE_G5, 32, NOTE_GS5, 32,  NOTE_A5, 16, NOTE_B5, 8
};
