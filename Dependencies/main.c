#include <ftio.h>

int main() {
	ft_out(FT_STR, "out", 0);
	ft_flush(1);
	ft_err(FT_STR, "\nerr", 0);
	ft_flush(2);
}
