#ifndef DOGICA
#define DOGICA

#ifdef QUANT_COD
    #error "Outra fonte ja foi incluida!"
#endif

//Fonte: Dogica

char fonte[] = "Dogica";

#define QUANT_COD 7

const char caracteres[3][26][QUANT_COD][3] = {
    {
        {"7E","88","88","88","7E","--","--"}, //A
        {"FE","92","92","92","6C","--","--"}, //B
        {"7C","82","82","82","44","--","--"}, //C
        {"80","FE","82","82","82","7C","--"}, //D
        {"FE","92","92","92","82","--","--"}, //E
        {"FE","90","90","90","80","--","--"}, //F
        {"7C","82","82","92","9E","--","--"}, //G
        {"FE","10","10","10","FE","--","--"}, //H
        {"82","FE","82","--","--","--","--"}, //I
        {"82","82","FC","80","--","--","--"}, //J
        {"FE","10","30","4C","82","--","--"}, //K
        {"FE","2" ,"2" ,"2" ,"--","--","--"}, //L
        {"FE","20","10","10","20","FE","--"}, //M
        {"FE","40","20","10","FE","--","--"}, //N
        {"7C","82","82","82","7C","--","--"}, //O
        {"FE","90","90","90","60","--","--"}, //P
        {"7C","82","8A","84","7A","--","--"}, //Q
        {"FE","90","90","98","66","--","--"}, //R
        {"64","92","92","92","4C","--","--"}, //S
        {"80","80","FE","80","80","--","--"}, //T
        {"FC","2" ,"2" ,"2" ,"FC","--","--"}, //U
        {"F0","0C","2" ,"0C","F0","--","--"}, //V
        {"FC","2" ,"4" ,"38","4" ,"2" ,"FC"}, //W
        {"C6","28","10","28","C6","--","--"}, //X
        {"E0","10","0E","10","E0","--","--"}, //Y
        {"86","8A","92","A2","C2","--","--"}  //Z
    },

    {
        {"0C","52","52","52","3E","--","--"}, //a
        {"FE","22","22","22","1C","--","--"}, //b
        {"3C","42","42","42","22","--","--"}, //c
        {"1C","22","22","22","FE","--","--"}, //d
        {"3C","52","52","52","32","--","--"}, //e
        {"10","7E","90","90","80","--","--"}, //f
        {"38","45","45","45","7E","--","--"}, //g
        {"FE","10","20","20","1E","--","--"}, //h
        {"22","BE","2" ,"--","--","--","--"}, //i
        {"41","7E","40","--","--","--","--"}, //j
        {"7E","8" ,"18","24","42","--","--"}, //k
        {"7C","2" ,"2" ,"--","--","--","--"}, //l
        {"3E","40","40","3E","40","40","3E"}, //m
        {"3E","20","40","40","3E","--","--"}, //n
        {"3C","42","42","42","3C","--","--"}, //o
        {"7F","44","44","44","38","--","--"}, //p
        {"38","44","44","44","3F","--","--"}, //q
        {"7E","20","40","40","--","--","--"}, //r
        {"24","52","52","52","0C","--","--"}, //s
        {"FC","22","22","22","--","--","--"}, //t
        {"7C","2" ,"2" ,"4" ,"7E","--","--"}, //u
        {"70","0C","2" ,"0C","70","--","--"}, //v
        {"3C","2" ,"3C","2" ,"2" ,"7C","--"}, //w
        {"42","24","18","24","42","--","--"}, //x
        {"72","0A","0C","70","--","--","--"}, //y
        {"46","4A","52","62","--","--","--"}  //z
    },

    {
        {"7C","8A","92","A2","7C","--","--"}, //0
        {"42","42","FE","2" ,"2" ,"--","--"}, //1
        {"42","86","8A","92","62","--","--"}, //2
        {"82","92","92","92","6C","--","--"}, //3
        {"18","28","48","FE","8" ,"--","--"}, //4
        {"E4","A2","A2","A2","9C","--","--"}, //5
        {"7C","92","92","92","4C","--","--"}, //6
        {"C0","80","86","88","90","E0","--"}, //7
        {"6C","92","92","92","6C","--","--"}, //8
        {"60","92","92","94","78","--","--"}  //9
    }
};

#endif /* DOGICA */