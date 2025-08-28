#include "libasm.h"
#include <stdio.h> // printf(), perror()
#include <string.h> // strlen(), strcpy(), strdup(), strcmp()
#include <stdlib.h> // malloc(), free()
#include <fcntl.h> // open()

static void test_strlen( void )
{
	const char *test_0 = "Hello, world!";
	const char *test_1 = "Vous savez, moi je ne crois pas qu’il y ait de bonne ou de mauvaise situation. Moi, si je devais résumer ma vie aujourd’hui avec vous, je dirais que c’est d’abord des rencontres. Des gens qui m’ont tendu la main, peut-être à un moment où je ne pouvais pas, où j’étais seul chez moi. Et c’est assez curieux de se dire que les hasards, les rencontres forgent une destinée… Parce que quand on a le goût de la chose, quand on a le goût de la chose bien faite, le beau geste, parfois on ne trouve pas l’interlocuteur en face je dirais, le miroir qui vous aide à avancer. Alors ça n’est pas mon cas, comme je disais là, puisque moi au contraire, j’ai pu : et je dis merci à la vie, je lui dis merci, je chante la vie, je danse la vie… je ne suis qu’amour ! Et finalement, quand beaucoup de gens aujourd’hui me disent « Mais comment fais-tu pour avoir cette humanité ? », et bien je leur réponds très simplement, je leur dis que c’est ce goût de l’amour ce goût donc qui m’a poussé aujourd’hui à entreprendre une construction mécanique, mais demain qui sait ? Peut-être simplement à me mettre au service de la communauté, à faire le don, le don de soi…";
	const char *test_2 = "Pigeon, oiseau à la grise robe, dans l'enfer des villes, à mon regard tu te dérobes, tu es vraiment le plus agile.";
	const char *test_3 = "23 à 0 ! C'est la piquette Jack ! Tu sais pas jouer Jack ! T'es mauvais !";
	const char *test_4 = "";

	printf( "--------------------test 0--------------------\n" );
	printf( "test: \"%s\"\n", test_0 );
	printf( "strlen()    = %zu\n", strlen( test_0 ) );
	printf( "ft_strlen() = %zu\n", ft_strlen( test_0 ) );

	printf( "--------------------test 1--------------------\n" );
	printf( "test: \"%s\"\n", test_1 );
	printf( "strlen()    = %zu\n", strlen( test_1 ) );
	printf( "ft_strlen() = %zu\n", ft_strlen( test_1 ) );

	printf( "--------------------test 2--------------------\n" );
	printf( "test: \"%s\"\n", test_2 );
	printf( "strlen()    = %zu\n", strlen( test_2 ) );
	printf( "ft_strlen() = %zu\n", ft_strlen( test_2 ) );

	printf( "--------------------test 3--------------------\n" );
	printf( "test: \"%s\"\n", test_3 );
	printf( "strlen()    = %zu\n", strlen( test_3 ) );
	printf( "ft_strlen() = %zu\n", ft_strlen( test_3 ) );

	printf( "--------------------test 4--------------------\n" );
	printf( "test: \"%s\"\n", test_4 );
	printf( "strlen()    = %zu\n", strlen( test_4 ) );
	printf( "ft_strlen() = %zu\n", ft_strlen( test_4 ) );
}

static void test_strcpy( void )
{
	const char *test_0 = "Hello, world!";
	const char *test_1 = "Vous savez, moi je ne crois pas qu’il y ait de bonne ou de mauvaise situation. Moi, si je devais résumer ma vie aujourd’hui avec vous, je dirais que c’est d’abord des rencontres. Des gens qui m’ont tendu la main, peut-être à un moment où je ne pouvais pas, où j’étais seul chez moi. Et c’est assez curieux de se dire que les hasards, les rencontres forgent une destinée… Parce que quand on a le goût de la chose, quand on a le goût de la chose bien faite, le beau geste, parfois on ne trouve pas l’interlocuteur en face je dirais, le miroir qui vous aide à avancer. Alors ça n’est pas mon cas, comme je disais là, puisque moi au contraire, j’ai pu : et je dis merci à la vie, je lui dis merci, je chante la vie, je danse la vie… je ne suis qu’amour ! Et finalement, quand beaucoup de gens aujourd’hui me disent « Mais comment fais-tu pour avoir cette humanité ? », et bien je leur réponds très simplement, je leur dis que c’est ce goût de l’amour ce goût donc qui m’a poussé aujourd’hui à entreprendre une construction mécanique, mais demain qui sait ? Peut-être simplement à me mettre au service de la communauté, à faire le don, le don de soi…";
	const char *test_2 = "Pigeon, oiseau à la grise robe, dans l'enfer des villes, à mon regard tu te dérobes, tu es vraiment le plus agile.";
	const char *test_3 = "23 à 0 ! C'est la piquette Jack ! Tu sais pas jouer Jack ! T'es mauvais !";
	const char *test_4 = "";

	char dest[2000];

	printf( "--------------------test 0--------------------\n" );
	printf( "test: \"%s\"\n", test_0 );
	printf( "strcpy()    = \"%s\"\n", strcpy( dest, test_0 ) );
	printf( "ft_strcpy() = \"%s\"\n", ft_strcpy( dest, test_0 ) );

	printf( "--------------------test 1--------------------\n" );
	printf( "test: \"%s\"\n", test_1 );
	printf( "strcpy()    = \"%s\"\n", strcpy( dest, test_1 ) );
	printf( "ft_strcpy() = \"%s\"\n", ft_strcpy( dest, test_1 ) );

	printf( "--------------------test 2--------------------\n" );
	printf( "test: \"%s\"\n", test_2 );
	printf( "strcpy()    = \"%s\"\n", strcpy( dest, test_2 ) );
	printf( "ft_strcpy() = \"%s\"\n", ft_strcpy( dest, test_2 ) );

	printf( "--------------------test 3--------------------\n" );
	printf( "test: \"%s\"\n", test_3 );
	printf( "strcpy()    = \"%s\"\n", strcpy( dest, test_3 ) );
	printf( "ft_strcpy() = \"%s\"\n", ft_strcpy( dest, test_3 ) );

	printf( "--------------------test 4--------------------\n" );
	printf( "test: \"%s\"\n", test_4 );
	printf( "strcpy()    = \"%s\"\n", strcpy( dest, test_4 ) );
	printf( "ft_strcpy() = \"%s\"\n", ft_strcpy( dest, test_4 ) );
}

static void test_strcmp( void )
{
	const char *test_0 = "Hello, world!";
	const char *test_1 = "Hello, world!!";
	const char *test_2 = "Hello world!";
	const char *test_3 = "";
	const char *test_4 = NULL;

	printf( "--------------------test 0--------------------\n" );
	printf( "test: \"%s\" and \"%s\"\n", test_0, test_0 );
	printf( "strcmp()    = \"%d\"\n", strcmp( test_0, test_0 ) );
	printf( "ft_strcmp() = \"%d\"\n", ft_strcmp( test_0, test_0 ) );

	printf( "--------------------test 1--------------------\n" );
	printf( "test: \"%s\" and \"%s\"\n", test_0, test_1 );
	printf( "strcmp()    = \"%d\"\n", strcmp( test_0, test_1 ) );
	printf( "ft_strcmp() = \"%d\"\n", ft_strcmp( test_0, test_1 ) );

	printf( "--------------------test 2--------------------\n" );
	printf( "test: \"%s\" and \"%s\"\n", test_0, test_2 );
	printf( "strcmp()    = \"%d\"\n", strcmp( test_0, test_2 ) );
	printf( "ft_strcmp() = \"%d\"\n", ft_strcmp( test_0, test_2 ) );

	printf( "--------------------test 3--------------------\n" );
	printf( "test: \"%s\" and \"%s\"\n", test_0, test_3 );
	printf( "strcmp()    = \"%d\"\n", strcmp( test_0, test_3 ) );
	printf( "ft_strcmp() = \"%d\"\n", ft_strcmp( test_0, test_3 ) );

	printf( "--------------------test 4--------------------\n" );
	printf( "test: \"%s\" and \"%s\"\n", test_0, test_4 );
	// printf( "strcmp()    = \"%d\"\n", strcmp( test_0, test_4 ) );
	// printf( "ft_strcmp() = \"%d\"\n", ft_strcmp( test_0, test_4 ) );
}

static void test_write( void )
{
	int fd = open( "/home/ebonutto/Documents/postcc/libasm/test/test.txt", O_WRONLY | O_APPEND, 0644 );
	if ( fd == -1 ) {
		perror( "open()" );
		return ;
	}

	const char *test_0 = "Hello, world!\n";
	const char *test_1 = "Vous savez, moi je ne crois pas qu’il y ait de bonne ou de mauvaise situation. Moi, si je devais résumer ma vie aujourd’hui avec vous, je dirais que c’est d’abord des rencontres. Des gens qui m’ont tendu la main, peut-être à un moment où je ne pouvais pas, où j’étais seul chez moi. Et c’est assez curieux de se dire que les hasards, les rencontres forgent une destinée… Parce que quand on a le goût de la chose, quand on a le goût de la chose bien faite, le beau geste, parfois on ne trouve pas l’interlocuteur en face je dirais, le miroir qui vous aide à avancer. Alors ça n’est pas mon cas, comme je disais là, puisque moi au contraire, j’ai pu : et je dis merci à la vie, je lui dis merci, je chante la vie, je danse la vie… je ne suis qu’amour ! Et finalement, quand beaucoup de gens aujourd’hui me disent « Mais comment fais-tu pour avoir cette humanité ? », et bien je leur réponds très simplement, je leur dis que c’est ce goût de l’amour ce goût donc qui m’a poussé aujourd’hui à entreprendre une construction mécanique, mais demain qui sait ? Peut-être simplement à me mettre au service de la communauté, à faire le don, le don de soi…\n";
	const char *test_2 = "Pigeon, oiseau à la grise robe, dans l'enfer des villes, à mon regard tu te dérobes, tu es vraiment le plus agile.\n";
	const char *test_3 = "23 à 0 ! C'est la piquette Jack ! Tu sais pas jouer Jack ! T'es mauvais !\n";
	const char *test_4 = "";

	printf( "--------------------test 0--------------------\n" );
	printf( "test: \"%d\" and \"%s\" and \"%zu\"\n", 1, test_0, strlen( test_0 ) );
	printf( "write()    = %zd\n", write( 1, test_0, strlen( test_0 ) ) );
	printf( "ft_write() = %zd\n", ft_write( 1, test_0, strlen( test_0 ) ) );

	printf( "--------------------test 1--------------------\n" );
	printf( "test: \"%d\" and \"%s\" and \"%zu\"\n", 1, test_1, strlen( test_1 ) );
	printf( "write()    = %zd\n", write( 1, test_1, strlen( test_1 ) ) );
	printf( "ft_write() = %zd\n", ft_write( 1, test_1, strlen( test_1 ) ) );

	printf( "--------------------test 2--------------------\n" );
	printf( "test: \"%d\" and \"%s\" and \"%zu\"\n", 1, test_2, strlen( test_2 ) );
	printf( "write()    = %zd\n", write( 1, test_2, strlen( test_2 ) ) );
	printf( "ft_write() = %zd\n", ft_write( 1, test_2, strlen( test_2 ) ) );

	printf( "--------------------test 3--------------------\n" );
	printf( "test: \"%d\" and \"%s\" and \"%zu\"\n", 2, test_3, strlen( test_3 ) );
	printf( "write()    = %zd\n", write( 2, test_3, strlen( test_3 ) ) );
	printf( "ft_write() = %zd\n", ft_write( 2, test_3, strlen( test_3 ) ) );

	printf( "--------------------test 4--------------------\n" );
	printf( "test: \"%d\" and \"%s\" and \"%zu\"\n", 2, test_4, strlen( test_4 ) );
	printf( "write()    = %zd\n", write( 2, test_4, strlen( test_4 ) ) );
	printf( "ft_write() = %zd\n", ft_write( 2, test_4, strlen( test_4 ) ) );

	printf( "--------------------test 5--------------------\n" );
	printf( "test: \"%d\" and \"%s\" and \"%zu\"\n", fd, test_0, strlen( test_0 ) );
	printf( "write()    = %zd\n", write( fd, test_0, strlen( test_0 ) ) );
	printf( "ft_write() = %zd\n", ft_write( fd, test_0, strlen( test_0 ) ) );

	printf( "--------------------test 6--------------------\n" );
	printf( "test: \"%d\" and \"%s\" and \"%zu\"\n", -1, test_0, strlen( test_0 ) );
	printf( "write()    = %zd\n", write( -1, test_0, strlen( test_0 ) ) );
	printf( "ft_write() = %zd\n", ft_write( -1, test_0, strlen( test_0 ) ) );

	close( fd );
}

static void test_read( void )
{
	int fd = open( "/home/ebonutto/Documents/postcc/libasm/test/test.txt", O_RDONLY, 0644 );
	if ( fd == -1 ) {
		perror( "open()" );
		return ;
	}

	const char buf[2000];

	close( fd );
}


static void test_strdup( void )
{
	char *dest;

	const char *test_0 = "Hello, world!";
	const char *test_1 = "Vous savez, moi je ne crois pas qu’il y ait de bonne ou de mauvaise situation. Moi, si je devais résumer ma vie aujourd’hui avec vous, je dirais que c’est d’abord des rencontres. Des gens qui m’ont tendu la main, peut-être à un moment où je ne pouvais pas, où j’étais seul chez moi. Et c’est assez curieux de se dire que les hasards, les rencontres forgent une destinée… Parce que quand on a le goût de la chose, quand on a le goût de la chose bien faite, le beau geste, parfois on ne trouve pas l’interlocuteur en face je dirais, le miroir qui vous aide à avancer. Alors ça n’est pas mon cas, comme je disais là, puisque moi au contraire, j’ai pu : et je dis merci à la vie, je lui dis merci, je chante la vie, je danse la vie… je ne suis qu’amour ! Et finalement, quand beaucoup de gens aujourd’hui me disent « Mais comment fais-tu pour avoir cette humanité ? », et bien je leur réponds très simplement, je leur dis que c’est ce goût de l’amour ce goût donc qui m’a poussé aujourd’hui à entreprendre une construction mécanique, mais demain qui sait ? Peut-être simplement à me mettre au service de la communauté, à faire le don, le don de soi…";
	const char *test_2 = "Pigeon, oiseau à la grise robe, dans l'enfer des villes, à mon regard tu te dérobes, tu es vraiment le plus agile.";
	const char *test_3 = "23 à 0 ! C'est la piquette Jack ! Tu sais pas jouer Jack ! T'es mauvais !";
	const char *test_4 = "";
	const char *test_5 = NULL;

	printf( "--------------------test 0--------------------\n" );
	printf( "test: \"%s\"\n", test_0 );
	printf( "strdup()    = \"%s\"\n", dest = strdup( test_0 ) );
	free( dest );
	printf( "ft_strdup() = \"%s\"\n", dest = ft_strdup( test_0 ) );
	free( dest );

	printf( "--------------------test 1--------------------\n" );
	printf( "test: \"%s\"\n", test_1 );
	printf( "strdup()    = \"%s\"\n", dest = strdup( test_1 ) );
	free( dest );
	printf( "ft_strdup() = \"%s\"\n", dest = ft_strdup( test_1 ) );
	free( dest );

	printf( "--------------------test 2--------------------\n" );
	printf( "test: \"%s\"\n", test_2 );
	printf( "strdup()    = \"%s\"\n", dest = strdup( test_2 ) );
	free( dest );
	printf( "ft_strdup() = \"%s\"\n", dest = ft_strdup( test_2 ) );
	free( dest );

	printf( "--------------------test 3--------------------\n" );
	printf( "test: \"%s\"\n", test_3 );
	printf( "strdup()    = \"%s\"\n", dest = strdup( test_3 ) );
	free( dest );
	printf( "ft_strdup() = \"%s\"\n", dest = ft_strdup( test_3 ) );
	free( dest );

	printf( "--------------------test 4--------------------\n" );
	printf( "test: \"%s\"\n", test_4 );
	printf( "strdup()    = \"%s\"\n", dest = strdup( test_4 ) );
	free( dest );
	printf( "ft_strdup() = \"%s\"\n", dest = ft_strdup( test_4 ) );
	free( dest );

	printf( "--------------------test 5--------------------\n" );
	printf( "test: \"%s\"\n", test_5 );
	// printf( "strdup()    = \"%s\"\n", dest = strdup( test_5 ) );
	// free( dest );
	printf( "ft_strdup() = \"%s\"\n", dest = ft_strdup( test_5 ) );
	free( dest );
}

static void test_atoi_base( void )
{
	const char *test_00 = NULL;
	const char *test_01 = "42";
	const char *test_02 = " \t\n\v\f\r\r\f\v\n\t 42";
	const char *test_03 = "\t +--+-";
	const char *test_04 = "\t --42";
	const char *test_05 = "\t +--+-42";
	const char *test_06 = " \t\n\v\f\r\r\f\v\n\t +--+-42";
	const char *test_07 = "  2147483647";
	const char *test_08 = "  -2147483648";
	const char *test_09 = "1234";
	const char *test_10 = "\t +--+-42abc";
	const char *test_11 = "\t +--+-abc";
	const char *test_12 = "\t  abc";
	const char *test_13 = "";
	const char *test_14 = "101010"; // 42
	const char *test_15 = "10011010010"; // 1234
	const char *test_16 = "2a"; // 42
	const char *test_17 = "4d2"; // 1234


	const char *base_2 = "01";
	const char *base_10 = "0123456789";
	const char *base_16 = "0123456789abcdef";

	const char *base_invalid_0 = NULL;
	const char *base_invalid_1 = "0";
	const char *base_invalid_2 = "0123456189";
	const char *base_invalid_3 = "0123456-89";


	printf( "--------------------test 00--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_00, base_10 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_00, base_10 ) );

	printf( "--------------------test 01--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_01, base_10 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_01, base_10 ) );

	printf( "--------------------test 02--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_02, base_10 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_02, base_10 ) );

	printf( "--------------------test 03--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_03, base_10 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_03, base_10 ) );

	printf( "--------------------test 04--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_04, base_10 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_04, base_10 ) );

	printf( "--------------------test 05--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_05, base_10 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_05, base_10 ) );

	printf( "--------------------test 06--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_06, base_10 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_06, base_10 ) );

	printf( "--------------------test 07--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_07, base_10 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_07, base_10 ) );

	printf( "--------------------test 08--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_08, base_10 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_08, base_10 ) );

	printf( "--------------------test 09--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_09, base_10 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_09, base_10 ) );

	printf( "--------------------test 10--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_10, base_10 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_10, base_10 ) );

	printf( "--------------------test 11--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_11, base_10 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_11, base_10 ) );

	printf( "--------------------test 12--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_12, base_10 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_12, base_10 ) );

	printf( "--------------------test 13--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_13, base_10 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_13, base_10 ) );

	// base 2 tests
	printf( "--------------------test 14--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_14, base_2 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_14, base_2 ) );

	printf( "--------------------test 15--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_15, base_2 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_15, base_2 ) );

	// base 16 tests
	printf( "--------------------test 16--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_16, base_16 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_16, base_16 ) );

	printf( "--------------------test 17--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_17, base_16 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_17, base_16 ) );

	// Invalid base tests
	printf( "--------------------test 18--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_01, base_invalid_0 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_01, base_invalid_0 ) );

	printf( "--------------------test 19--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_01, base_invalid_1 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_01, base_invalid_1 ) );

	printf( "--------------------test 20--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_01, base_invalid_2 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_01, base_invalid_2 ) );

	printf( "--------------------test 21--------------------\n" );
	printf( "test: \"%s\" and \"%s\" \n", test_01, base_invalid_3 );
	printf( "ft_atoi_base() = \"%d\"\n", ft_atoi_base( test_01, base_invalid_3 ) );
}

// static void print_list( t_list *list ) // works only for integers
// {
// 	while ( list )
// 	{
// 		printf( "%d -> ", *( int * )list->data );
// 		list = list->next;
// 	}
// 	printf( "NULL\n" );
// }

// static int cmp( void *a, void *b )
// {
// 	if ( *( int * )a <= *( int * )b )
// 		return 0;
// 	return 1;
// }

// static int is_list_sorted(t_list *list)
// {
//     while (list && list->next)
//     {
//         if (*(int *)list->next->data < *(int *)list->data)
//             return 0;
//         list = list->next;
//     }
//     return 1;
// }

// static void test_list_sort( void )
// {
//     t_list *list = NULL;

// 	for (int i = 0; i < 100; ++i)
// 	{
// 		int *val = malloc(sizeof(int));
// 		if (!val)
// 		{
// 			perror("malloc");
// 			exit(1);
// 		}
// 		*val = rand() % 100;
// 		ft_list_push_front(&list, val);
// 	}

//     printf("Avant tri : ");
//     print_list(list);

//     ft_list_sort(&list, cmp);

//     printf("Après tri : ");
//     print_list(list);
// 	if (is_list_sorted( list ))
// 		printf("yeaaaaahhhh\n");
// 	else
// 		printf("noooooo\n");
// }

int main(void)
{
	if ( 1 == 2 ) {
		test_strlen();
		test_strcpy();
		test_atoi_base();
		test_strdup();
		test_strcmp();
	}
	test_write();
	// test_list_sort();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// fonction utilitaire pour créer un node
t_list *new_node(char *str)
{
    t_list *node = malloc(sizeof(t_list));
    node->data = strdup(str); // copie la string
    node->next = NULL;
    return node;
}

// // print la liste
// void print_list(t_list *list)
// {
//     while (list)
//     {
//         printf("%s -> ", (char*)list->data);
//         list = list->next;
//     }
//     printf("NULL\n");
// }

// // cmp: retourne 0 si égaux
// int cmp_str(void *a, void *b)
// {
//     return strcmp((char*)a, (char*)b);
// }

// // free_fct
// void free_str(void *ptr)
// {
//     free(ptr);
// }

// int main(void)
// {
//     t_list *list = NULL;

//     // liste = "c" -> "b" -> "a"
//     list_push_front(&list, "a");
//     list_push_front(&list, "b");
//     list_push_front(&list, "c");

//     printf("Avant suppression : ");
//     print_list(list);

//     // supprime "b"
//     ft_list_remove_if(&list, "b", cmp_str, free_str);

//     printf("Après suppression de 'b' : ");
//     print_list(list);

//     // supprime "a"
//     ft_list_remove_if(&list, "a", cmp_str, free_str);

//     printf("Après suppression de 'a' : ");
//     print_list(list);

//     // supprime "c"
//     ft_list_remove_if(&list, "c", cmp_str, free_str);

//     printf("Après suppression de 'c' : ");
//     print_list(list);

//     return 0;
// }