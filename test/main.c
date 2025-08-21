#include "libasm.h"
#include <stdio.h> // printf()
#include <string.h> // strlen()

static void test_strlen( void )
{
	const char *test0 = "Hello, world!";
	const char *test1 = "Vous savez, moi je ne crois pas qu’il y ait de bonne ou de mauvaise situation. Moi, si je devais résumer ma vie aujourd’hui avec vous, je dirais que c’est d’abord des rencontres. Des gens qui m’ont tendu la main, peut-être à un moment où je ne pouvais pas, où j’étais seul chez moi. Et c’est assez curieux de se dire que les hasards, les rencontres forgent une destinée… Parce que quand on a le goût de la chose, quand on a le goût de la chose bien faite, le beau geste, parfois on ne trouve pas l’interlocuteur en face je dirais, le miroir qui vous aide à avancer. Alors ça n’est pas mon cas, comme je disais là, puisque moi au contraire, j’ai pu : et je dis merci à la vie, je lui dis merci, je chante la vie, je danse la vie… je ne suis qu’amour ! Et finalement, quand beaucoup de gens aujourd’hui me disent « Mais comment fais-tu pour avoir cette humanité ? », et bien je leur réponds très simplement, je leur dis que c’est ce goût de l’amour ce goût donc qui m’a poussé aujourd’hui à entreprendre une construction mécanique, mais demain qui sait ? Peut-être simplement à me mettre au service de la communauté, à faire le don, le don de soi…";
	const char *test2 = "Pigeon, oiseau à la grise robe, dans l'enfer des villes, à mon regard tu te dérobes, tu es vraiment le plus agile.";
	const char *test3 = "23 à 0 ! C'est la piquette Jack ! Tu sais pas jouer Jack ! T'es mauvais !";
	const char *test4 = "";

	printf( "--------------------test 0--------------------\n" );
	printf( "test: \"%s\"\n", test0 );
	printf( "strlen()    = %zu\n", strlen( test0 ) );
	printf( "ft_strlen() = %zu\n", ft_strlen( test0 ) );

	printf( "--------------------test 1--------------------\n" );
	printf( "test: \"%s\"\n", test1 );
	printf( "strlen()    = %zu\n", strlen( test1 ) );
	printf( "ft_strlen() = %zu\n", ft_strlen( test1 ) );

	printf( "--------------------test 2--------------------\n" );
	printf( "test: \"%s\"\n", test2 );
	printf( "strlen()    = %zu\n", strlen( test2 ) );
	printf( "ft_strlen() = %zu\n", ft_strlen( test2 ) );

	printf( "--------------------test 3--------------------\n" );
	printf( "test: \"%s\"\n", test3 );
	printf( "strlen()    = %zu\n", strlen( test3 ) );
	printf( "ft_strlen() = %zu\n", ft_strlen( test3 ) );

	printf( "--------------------test 4--------------------\n" );
	printf( "test: \"%s\"\n", test4 );
	printf( "strlen()    = %zu\n", strlen( test4 ) );
	printf( "ft_strlen() = %zu\n", ft_strlen( test4 ) );
}

static void test_strcpy( void )
{
	const char *test0 = "Hello, world!";
	const char *test1 = "Vous savez, moi je ne crois pas qu’il y ait de bonne ou de mauvaise situation. Moi, si je devais résumer ma vie aujourd’hui avec vous, je dirais que c’est d’abord des rencontres. Des gens qui m’ont tendu la main, peut-être à un moment où je ne pouvais pas, où j’étais seul chez moi. Et c’est assez curieux de se dire que les hasards, les rencontres forgent une destinée… Parce que quand on a le goût de la chose, quand on a le goût de la chose bien faite, le beau geste, parfois on ne trouve pas l’interlocuteur en face je dirais, le miroir qui vous aide à avancer. Alors ça n’est pas mon cas, comme je disais là, puisque moi au contraire, j’ai pu : et je dis merci à la vie, je lui dis merci, je chante la vie, je danse la vie… je ne suis qu’amour ! Et finalement, quand beaucoup de gens aujourd’hui me disent « Mais comment fais-tu pour avoir cette humanité ? », et bien je leur réponds très simplement, je leur dis que c’est ce goût de l’amour ce goût donc qui m’a poussé aujourd’hui à entreprendre une construction mécanique, mais demain qui sait ? Peut-être simplement à me mettre au service de la communauté, à faire le don, le don de soi…";
	const char *test2 = "Pigeon, oiseau à la grise robe, dans l'enfer des villes, à mon regard tu te dérobes, tu es vraiment le plus agile.";
	const char *test3 = "23 à 0 ! C'est la piquette Jack ! Tu sais pas jouer Jack ! T'es mauvais !";
	const char *test4 = "";

	char dest[2000];

	printf( "--------------------test 0--------------------\n" );
	printf( "test: \"%s\"\n", test0 );
	printf( "strcpy()    = \"%s\"\n", strcpy( dest, test0 ) );
	printf( "ft_strcpy() = \"%s\"\n", ft_strcpy( dest, test0 ) );

	printf( "--------------------test 1--------------------\n" );
	printf( "test: \"%s\"\n", test1 );
	printf( "strcpy()    = \"%s\"\n", strcpy( dest, test1 ) );
	printf( "ft_strcpy() = \"%s\"\n", ft_strcpy( dest, test1 ) );

	printf( "--------------------test 2--------------------\n" );
	printf( "test: \"%s\"\n", test2 );
	printf( "strcpy()    = \"%s\"\n", strcpy( dest, test2 ) );
	printf( "ft_strcpy() = \"%s\"\n", ft_strcpy( dest, test2 ) );

	printf( "--------------------test 3--------------------\n" );
	printf( "test: \"%s\"\n", test3 );
	printf( "strcpy()    = \"%s\"\n", strcpy( dest, test3 ) );
	printf( "ft_strcpy() = \"%s\"\n", ft_strcpy( dest, test3 ) );

	printf( "--------------------test 4--------------------\n" );
	printf( "test: \"%s\"\n", test4 );
	printf( "strcpy()    = \"%s\"\n", strcpy( dest, test4 ) );
	printf( "ft_strcpy() = \"%s\"\n", ft_strcpy( dest, test4 ) );
}

int main( void )
{
	if ( 1 == 2 ) {
		test_strlen();
		test_strcpy();
	}
	printf("%d\n", ft_atoi_base("-2", "0123456789"));
	return ( 0 );
}
