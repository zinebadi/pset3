
// Calculates frequency of a note
int frequency(string note)
{
    int oct;
    int n = 0;
    char letter = note[0];    
    if (strlen(note)==3){
        oct = atoi(&note[2]);
        //printf("%c\n",note[1]);
        char accident = note[1];
        //printf("%c\n", accident);
        if (accident=='#'){
            //printf("found a sharp");
            n += 1;
        }else if (accident == 'b'){
            //printf("found a flat");
            n -= 1;
        }
    }else{
        oct = atoi(&note[1]);
    }
    
    
    
    
    
