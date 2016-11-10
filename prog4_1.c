    #include <stdio.h>
    #include <string.h>
    #include <lua.h>
    #include <lauxlib.h>
    #include <lualib.h>
    
    int main (int argc, char **argv) {
	printf("Assignment #4-1, Ernest Viola, ernest.viol@gmail.com\n");
	lua_State *L = luaL_newstate(); //opens lua

	luaL_openlibs(L); //opens lua libs
	
	luaL_dofile(L, argv[1]); //takes the lua file and opens/executes it
    
    
	lua_close(L); //closes lua state
      return 0;
    }
