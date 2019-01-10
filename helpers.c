
// Calculates frequency of a note
int frequency(string note)
{
    int oct;
    int n = 0;
    char letter = note[0];    
    if (strlen(note)==3)
    {
        oct = atoi(note[2]);
        //printf("%i\n", oct);
        
        char accident = note[1];
        //printf("%c\n", accident);
        
        if (accident =='#')
        {
            //printf("found a sharp");
            n += 1;
        }
        else if (accident == 'b')
        {
            //printf("found a flat");
            n -= 1;
        }
    }
    else
    {
        oct = atoi(note[1]);
    }
    
    
    if (letter == 'A')
    {
        n += 0;
    }
    else if (letter=='B')
    {
        n += 2;
    }
    else if (letter=='C')
    {
        n -= 9;
    }
    else if (letter=='D')
    {
        n -= 7;
    }
    else if (letter=='E')
    {
        n -= 5;
    }
    else if (letter=='F')
    {
        n -= 4;
    }
    else if (letter=='G')
    {
        n -= 2;
    }
    //printf("%i\n",n);
    n += (oct-4) * 12;

    float power = n/12.;
    //printf("%f\n",power);
    float f = round(pow(2, power)*440);
    //printf("%f\n",f);
    return f;
}
    
    
    
    
