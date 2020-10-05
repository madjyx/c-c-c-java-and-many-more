#ifndef Z4Z1_H_INCLUDED
#define Z4Z1_H_INCLUDED
#define PI 3.14
float povrsina_kvadrata(int x)
{float P;
    return P=x*x;
}
float obim_kvadrata(int x)
{float O;
    return O=4*x;
}
float povrsina_trokuta(int x)
{float P;
    return P=(sqrt(3)*(x*x))/4;
}
float obim_trokuta(int x)
{float O;
    return O=3*x;
}
float povrsina_kvadra(int x,int y,int z)
{float P;
    return P=2*((x*y)*(x*z)+(y*z));
}
float zapremina_kvadra(int x,int y,int z)
{float V;
    return V=x*y*z;
}
float povrsina_lopte(int x)
{float P;
    return P=4*PI*x*x;
}
float zapremina_lopte(int x)
{float V;
    return V=4/3*PI*(x*x*x);
}
#endif // Z4Z1_H_INCLUDED
