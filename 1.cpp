#include <stdio.h>

int main()
{
    printf("=======Menu=======\n");
    printf("B?n th�ch an m�n g� nh?t? \n");
    printf("a. Th?t ch� lu?c + ru?u \n");
    printf("b. Ti?u h? + ru?u \n");
    printf("c. Bia + l?c + nem chua \n");
    printf("d. Th?t, n?m b� nu?ng + ru?u \n");
    
    char lua_Chon;
    printf("M?i nh?p s? l?a ch?n: ");
    scanf("%c", &lua_Chon);
    
    switch(lua_Chon){
        case 'a': printf("ok th?t ch� h�ng x�m");
            break;
        case 'b': printf("ok th?t m�o h�ng x�m");
            break;
        case 'c': printf("tr?i n�ng bia l� nh?t");
            break
        case 'd': printf("tr?i l?nh tuy?t v?i");
            break;
        default : printf("m?t di?c �? ABCD th�i th�nh");
            break;
    }

 //chồng yêu vợ chụt chụt
    return 0;
}


