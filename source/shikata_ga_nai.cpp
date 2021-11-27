#include "source.hpp"

/* Author : Muhammad Quwais Saputra
 * © 2021
 */

int main(){
	Start_teh();
	for(;;)
		Start_cheat();
	if(FREEDOM)
		Start_cheat_with_options("\x76");
	else if(WARNING)
		Start_cheat_with_options("\x1");
	else if(ERROR)
		return 2;
	else {
		try { start_cheat_with_options(""); }
		catch (Exception e) { box("%s",e); }
	}
}
