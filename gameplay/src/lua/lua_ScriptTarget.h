#ifndef LUA_SCRIPTTARGET_H_
#define LUA_SCRIPTTARGET_H_

namespace gameplay
{

// Lua bindings for ScriptTarget.
int lua_ScriptTarget_addScript(lua_State* state);
int lua_ScriptTarget_removeScript(lua_State* state);

void luaRegister_ScriptTarget();

}

#endif
