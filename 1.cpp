#include <stdio.h>

int main()
{
    printf("=======Menu=======\n");
    printf("B?n thích an món gì nh?t? \n");
    printf("a. Th?t chó lu?c + ru?u \n");
    printf("b. Ti?u h? + ru?u \n");
    printf("c. Bia + l?c + nem chua \n");
    printf("d. Th?t, n?m bò nu?ng + ru?u \n");
    
    char lua_Chon;
    printf("M?i nh?p s? l?a ch?n: ");
    scanf("%c", &lua_Chon);
    
    switch(lua_Chon){
        case 'a': printf("ok th?t chó hàng xóm");
            break;
        case 'b': printf("ok th?t mèo hàng xóm");
            break;
        case 'c': printf("tr?i nóng bia là nh?t");
            break
        case 'd': printf("tr?i l?nh tuy?t v?i");
            break;
        default : printf("m?t di?c à? ABCD thôi thánh");
            break;
    }


    return 0;
}


