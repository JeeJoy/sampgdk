/* Copyright (C) 2013 Zeex
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <sampgdk/amx.h>
#include <sampgdk/plugin.h>

void **sampgdk_amx_exports;

uint16_t *AMXAPI amx_Align16(uint16_t *v) {
  typedef uint16_t *(AMXAPI *amx_Align16_t)(uint16_t *v);
  amx_Align16_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_Align16];
  return fn(v);
}

uint32_t *AMXAPI amx_Align32(uint32_t *v) {
  typedef uint32_t *(AMXAPI *amx_Align32_t)(uint32_t *v);
  amx_Align32_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_Align32];
  return fn(v);
}

#if defined _I64_MAX || defined HAVE_I64

uint64_t *AMXAPI amx_Align64(uint64_t *v) {
  typedef uint64_t *(AMXAPI *amx_Align64_t)(uint64_t *v);
  amx_Align64_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_Align64];
  return fn(v);
}

#endif

int AMXAPI amx_Allot(AMX *amx, int cells, cell *amx_addr, cell **phys_addr) {
  typedef int (AMXAPI *amx_Allot_t)(AMX *amx, int cells, cell *amx_addr,
                                    cell **phys_addr);
  amx_Allot_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_Allot];
  return fn(amx, cells, amx_addr, phys_addr);
}

int AMXAPI amx_Callback(AMX *amx, cell index, cell *result, cell *params) {
  typedef int (AMXAPI *amx_Callback_t)(AMX *amx, cell index, cell *result,
                                       cell *params);
  amx_Callback_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_Callback];
  return fn(amx, index, result, params);
}

int AMXAPI amx_Cleanup(AMX *amx) {
  typedef int (AMXAPI *amx_Cleanup_t)(AMX *amx);
  amx_Cleanup_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_Cleanup];
  return fn(amx);
}

int AMXAPI amx_Clone(AMX *amxClone, AMX *amxSource, void *data) {
  typedef int (AMXAPI *amx_Clone_t)(AMX *amxClone, AMX *amxSource, void *data);
  amx_Clone_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_Clone];
  return fn(amxClone, amxSource, data);
}

int AMXAPI amx_Exec(AMX *amx, cell *retval, int index) {
  typedef int (AMXAPI *amx_Exec_t)(AMX *amx, cell *retval, int index);
  amx_Exec_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_Exec];
  return fn(amx, retval, index);
}

int AMXAPI amx_FindNative(AMX *amx, const char *name, int *index) {
  typedef int (AMXAPI *amx_FindNative_t)(AMX *amx, const char *name,
                                         int *index);
  amx_FindNative_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_FindNative];
  return fn(amx, name, index);
}

int AMXAPI amx_FindPublic(AMX *amx, const char *funcname, int *index) {
  typedef int (AMXAPI *amx_FindPublic_t)(AMX *amx, const char *funcname,
                                         int *index);
  amx_FindPublic_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_FindPublic];
  return fn(amx, funcname, index);
}

int AMXAPI amx_FindPubVar(AMX *amx, const char *varname, cell *amx_addr) {
  typedef int (AMXAPI *amx_FindPubVar_t)(AMX *amx, const char *varname,
                                         cell *amx_addr);
  amx_FindPubVar_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_FindPubVar];
  return fn(amx, varname, amx_addr);
}

int AMXAPI amx_FindTagId(AMX *amx, cell tag_id, char *tagname) {
  typedef int (AMXAPI *amx_FindTagId_t)(AMX *amx, cell tag_id, char *tagname);
  amx_FindTagId_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_FindTagId];
  return fn(amx, tag_id, tagname);
}

int AMXAPI amx_Flags(AMX *amx, uint16_t *flags) {
  typedef int (AMXAPI *amx_Flags_t)(AMX *amx, uint16_t *flags);
  amx_Flags_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_Flags];
  return fn(amx, flags);
}

int AMXAPI amx_GetAddr(AMX *amx, cell amx_addr, cell **phys_addr) {
  typedef int (AMXAPI *amx_GetAddr_t)(AMX *amx, cell amx_addr,
                                      cell **phys_addr);
  amx_GetAddr_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_GetAddr];
  return fn(amx, amx_addr, phys_addr);
}

int AMXAPI amx_GetNative(AMX *amx, int index, char *funcname) {
  typedef int (AMXAPI *amx_GetNative_t)(AMX *amx, int index, char *funcname);
  amx_GetNative_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_GetNative];
  return fn(amx, index, funcname);
}

int AMXAPI amx_GetPublic(AMX *amx, int index, char *funcname) {
  typedef int (AMXAPI *amx_GetPublic_t)(AMX *amx, int index, char *funcname);
  amx_GetPublic_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_GetPublic];
  return fn(amx, index, funcname);
}

int AMXAPI amx_GetPubVar(AMX *amx, int index, char *varname, cell *amx_addr) {
  typedef int (AMXAPI *amx_GetPubVar_t)(AMX *amx, int index, char *varname,
                                        cell *amx_addr);
  amx_GetPubVar_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_GetPubVar];
  return fn(amx, index, varname, amx_addr);
}

int AMXAPI amx_GetString(char *dest, const cell *source, int use_wchar,
                         size_t size) {
  typedef int (AMXAPI *amx_GetString_t)(char *dest, const cell *source,
                                        int use_wchar, size_t size);
  amx_GetString_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_GetString];
  return fn(dest, source, use_wchar, size);
}

int AMXAPI amx_GetTag(AMX *amx, int index, char *tagname, cell *tag_id) {
  typedef int (AMXAPI *amx_GetTag_t)(AMX *amx, int index, char *tagname,
                                     cell *tag_id);
  amx_GetTag_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_GetTag];
  return fn(amx, index, tagname, tag_id);
}

int AMXAPI amx_GetUserData(AMX *amx, long tag, void **ptr) {
  typedef int (AMXAPI *amx_GetUserData_t)(AMX *amx, long tag, void **ptr);
  amx_GetUserData_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_GetUserData];
  return fn(amx, tag, ptr);
}

int AMXAPI amx_Init(AMX *amx, void *program) {
  typedef int (AMXAPI *amx_Init_t)(AMX *amx, void *program);
  amx_Init_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_Init];
  return fn(amx, program);
}

int AMXAPI amx_InitJIT(AMX *amx, void *reloc_table, void *native_code) {
  typedef int (AMXAPI *amx_InitJIT_t)(AMX *amx, void *reloc_table,
                                      void *native_code);
  amx_InitJIT_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_InitJIT];
  return fn(amx, reloc_table, native_code);
}

int AMXAPI amx_MemInfo(AMX *amx, long *codesize, long *datasize,
                       long *stackheap) {
  typedef int (AMXAPI *amx_MemInfo_t)(AMX *amx, long *codesize,
                                      long *datasize, long *stackheap);
  amx_MemInfo_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_MemInfo];
  return fn(amx, codesize, datasize, stackheap);
}

int AMXAPI amx_NameLength(AMX *amx, int *length) {
  typedef int (AMXAPI *amx_NameLength_t)(AMX *amx, int *length);
  amx_NameLength_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_NameLength];
  return fn(amx, length);
}

AMX_NATIVE_INFO *AMXAPI amx_NativeInfo(const char *name, AMX_NATIVE func) {
  typedef AMX_NATIVE_INFO *(AMXAPI *amx_NativeInfo_t)(const char *name,
                                                       AMX_NATIVE func);
  amx_NativeInfo_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_NativeInfo];
  return fn(name, func);
}

int AMXAPI amx_NumNatives(AMX *amx, int *number) {
  typedef int (AMXAPI *amx_NumNatives_t)(AMX *amx, int *number);
  amx_NumNatives_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_NumNatives];
  return fn(amx, number);
}

int AMXAPI amx_NumPublics(AMX *amx, int *number) {
  typedef int (AMXAPI *amx_NumPublics_t)(AMX *amx, int *number);
  amx_NumPublics_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_NumPublics];
  return fn(amx, number);
}

int AMXAPI amx_NumPubVars(AMX *amx, int *number) {
  typedef int (AMXAPI *amx_NumPubVars_t)(AMX *amx, int *number);
  amx_NumPubVars_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_NumPubVars];
  return fn(amx, number);
}

int AMXAPI amx_NumTags(AMX *amx, int *number) {
  typedef int (AMXAPI *amx_NumTags_t)(AMX *amx, int *number);
  amx_NumTags_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_NumTags];
  return fn(amx, number);
}

int AMXAPI amx_Push(AMX *amx, cell value) {
  typedef int (AMXAPI *amx_Push_t)(AMX *amx, cell value);
  amx_Push_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_Push];
  return fn(amx, value);
}

int AMXAPI amx_PushArray(AMX *amx, cell *amx_addr, cell **phys_addr,
                         const cell array[], int numcells) {
  typedef int (AMXAPI *amx_PushArray_t)(AMX *amx, cell *amx_addr,
                                        cell **phys_addr, const cell array[],
                                        int numcells);
  amx_PushArray_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_PushArray];
  return fn(amx, amx_addr, phys_addr, array, numcells);
}

int AMXAPI amx_PushString(AMX *amx, cell *amx_addr, cell **phys_addr,
                          const char *string, int pack, int use_wchar) {
  typedef int (AMXAPI *amx_PushString_t)(AMX *amx, cell *amx_addr,
                                         cell **phys_addr, const char *string,
                                         int pack, int use_wchar);
  amx_PushString_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_PushString];
  return fn(amx, amx_addr, phys_addr, string, pack, use_wchar);
}

int AMXAPI amx_RaiseError(AMX *amx, int error) {
  typedef int (AMXAPI *amx_RaiseError_t)(AMX *amx, int error);
  amx_RaiseError_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_RaiseError];
  return fn(amx, error);
}

int AMXAPI amx_Register(AMX *amx, const AMX_NATIVE_INFO *nativelist,
                        int number) {
  typedef int (AMXAPI *amx_Register_t)(AMX *amx,
                                       const AMX_NATIVE_INFO *nativelist,
                                       int number);
  amx_Register_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_Register];
  return fn(amx, nativelist, number);
}

int AMXAPI amx_Release(AMX *amx, cell amx_addr) {
  typedef int (AMXAPI *amx_Release_t)(AMX *amx, cell amx_addr);
  amx_Release_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_Release];
  return fn(amx, amx_addr);
}

int AMXAPI amx_SetCallback(AMX *amx, AMX_CALLBACK callback) {
  typedef int (AMXAPI *amx_SetCallback_t)(AMX *amx, AMX_CALLBACK callback);
  amx_SetCallback_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_SetCallback];
  return fn(amx, callback);
}

int AMXAPI amx_SetDebugHook(AMX *amx, AMX_DEBUG debug) {
  typedef int (AMXAPI *amx_SetDebugHook_t)(AMX *amx, AMX_DEBUG debug);
  amx_SetDebugHook_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_SetDebugHook];
  return fn(amx, debug);
}

int AMXAPI amx_SetString(cell *dest, const char *source, int pack,
                         int use_wchar, size_t size) {
  typedef int (AMXAPI *amx_SetString_t)(cell *dest, const char *source,
                                        int pack, int use_wchar, size_t size);
  amx_SetString_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_SetString];
  return fn(dest, source, pack, use_wchar, size);
}

int AMXAPI amx_SetUserData(AMX *amx, long tag, void *ptr) {
  typedef int (AMXAPI *amx_SetUserData_t)(AMX *amx, long tag, void *ptr);
  amx_SetUserData_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_SetUserData];
  return fn(amx, tag, ptr);
}

int AMXAPI amx_StrLen(const cell *cstring, int *length) {
  typedef int (AMXAPI *amx_StrLen_t)(const cell *cstring, int *length);
  amx_StrLen_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_StrLen];
  return fn(cstring, length);
}

int AMXAPI amx_UTF8Check(const char *string, int *length) {
  typedef int (AMXAPI *amx_UTF8Check_t)(const char *string, int *length);
  amx_UTF8Check_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_UTF8Check];
  return fn(string, length);
}

int AMXAPI amx_UTF8Get(const char *string, const char **endptr, cell *value) {
  typedef int (AMXAPI *amx_UTF8Get_t)(const char *string, const char **endptr,
                                      cell *value);
  amx_UTF8Get_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_UTF8Get];
  return fn(string, endptr, value);
}

int AMXAPI amx_UTF8Len(const cell *cstr, int *length) {
  typedef int (AMXAPI *amx_UTF8Len_t)(const cell *cstr, int *length);
  amx_UTF8Len_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_UTF8Len];
  return fn(cstr, length);
}

int AMXAPI amx_UTF8Put(char *string, char **endptr, int maxchars, cell value) {
  typedef int (AMXAPI *amx_UTF8Put_t)(char *string, char **endptr,
                                      int maxchars, cell value);
  amx_UTF8Put_t fn = sampgdk_amx_exports[PLUGIN_AMX_EXPORT_UTF8Put];
  return fn(string, endptr, maxchars, value);
}
