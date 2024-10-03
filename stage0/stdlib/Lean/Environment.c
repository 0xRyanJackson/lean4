// Lean compiler output
// Module: Lean.Environment
// Imports: Init.Control.StateRef Init.Data.Array.BinSearch Init.Data.Stream Lean.ImportingFlag Lean.Data.HashMap Lean.Data.SMap Lean.Declaration Lean.LocalContext Lean.Util.Path Lean.Util.FindExpr Lean.Util.Profile Lean.Util.InstantiateLevelParams
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT uint32_t l_Lean_EnvironmentHeader_trustLevel___default;
uint8_t lean_compacted_region_is_memory_mapped(size_t);
static lean_object* l_Lean_TagDeclarationExtension_instInhabited___closed__1;
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_instantiateTypeLevelParams(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAlreadyImported___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__25;
LEAN_EXPORT lean_object* l_Lean_instMonadEnvOfMonadLift(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Environment_find_x3f___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* lean_format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_mkModuleData___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtension_instInhabited(lean_object*, lean_object*);
static lean_object* l_Lean_MapDeclarationExtension_insert___rarg___closed__2;
static lean_object* l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__2;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__11(lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__3;
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_read_module_data(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_diagExt;
LEAN_EXPORT lean_object* l_Lean_mkModuleData___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Kernel_enableDiag___closed__1;
LEAN_EXPORT lean_object* l_Lean_EnvExtension_getState___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkModuleData(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f_x27___at_Lean_Environment_find_x3f___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_quickLt___boxed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_NameSSet_insert___spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_evalConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_ImportStateM_run___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_modifyState___rarg___lambda__1(lean_object*, lean_object*);
lean_object* lean_add_decl(lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerPersistentEnvExtensionUnsafe(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
static lean_object* l_Lean_mkEmptyEnvironment___lambda__1___closed__3;
LEAN_EXPORT uint8_t l___private_Lean_Environment_0__Lean_equivInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_importModules___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___closed__1;
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__25;
static lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedModuleData;
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_modifyState___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_finalizeImport(lean_object*, lean_object*, lean_object*, uint32_t, uint8_t, lean_object*);
lean_object* l_Lean_profileitIOUnsafe___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_instModuleIdxToString___closed__1;
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__3;
LEAN_EXPORT lean_object* l_Lean_importModules___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_modifyState___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
static lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Kernel_enableDiag___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportState_moduleData___default;
static lean_object* l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_mkTagDeclarationExtension___spec__1___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_EnvironmentHeader_regions___default;
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_insert(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_finalizeImport___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__8;
static lean_object* l_Lean_instInhabitedEnvExtensionInterface___closed__3;
LEAN_EXPORT lean_object* l_Lean_Environment_allImportedModuleNames___boxed(lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__28;
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___rarg___lambda__2___boxed(lean_object*);
static lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_setImportedEntries(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
LEAN_EXPORT lean_object* l_Lean_finalizeImport___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_EnvironmentHeader_quotInit___default;
static lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__1;
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnvExtensionState;
LEAN_EXPORT uint8_t l_Lean_Environment_hasUnsafe___lambda__1(lean_object*, lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__1;
lean_object* l_Array_findIdx_x3f_loop___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_find_x3f___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_kernel_is_def_eq(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_getModuleIdxFor_x3f___spec__1(lean_object*, lean_object*);
lean_object* l_Array_qpartition___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_getModuleEntries(lean_object*, lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___rarg___lambda__3(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_finalizeImport___spec__8(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_numBuckets___at_Lean_Environment_displayStats___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_throwAlreadyImported___rarg___closed__2;
static lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__4;
static lean_object* l_Lean_instInhabitedEnvExtensionInterface___closed__4;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__3;
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkExtNameMap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtensionDescr_statsFn___default(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at_Lean_Environment_addExtraName___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_mkModuleData___spec__1(lean_object*, size_t, size_t, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_importModulesCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Kernel_Diagnostics_enabled___default;
extern uint8_t l_instInhabitedBool;
uint8_t l_Lean_NameHashSet_contains(lean_object*, lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_invalidExtMsg___closed__1;
static lean_object* l_Lean_mkTagDeclarationExtension___closed__3;
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__12;
LEAN_EXPORT lean_object* l_Lean_readModuleData___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___closed__2;
LEAN_EXPORT uint8_t l_Lean_Environment_isConstructor(lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__16;
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Kernel_resetDiag___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_modifyState(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_getState(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_importModules___lambda__2___closed__1;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_envExtensionsRef;
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__2;
LEAN_EXPORT lean_object* l___auto____x40_Lean_Environment___hyg_3459_;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtension_modifyState___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_get_num_attributes(lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvironmentHeader_moduleNames___default;
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__11;
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_mkInitialExtStates(lean_object*);
LEAN_EXPORT lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Raw_Internal_numBuckets___rarg(lean_object*);
lean_object* l_Lean_RBNode_insert___at_Lean_NameSet_insert___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__7;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_imports___boxed(lean_object*);
static lean_object* l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtensionDescr_toArrayFn___default___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkModuleData___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getNumBuiltinAttributes___boxed(lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__21;
static lean_object* l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_mkModuleData___spec__3___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__24;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__2;
LEAN_EXPORT lean_object* lean_kernel_get_diag(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportStateM_run(lean_object*);
LEAN_EXPORT lean_object* l_Lean_importModules___lambda__1(lean_object*, lean_object*, uint32_t, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_kernel_check(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___rarg(lean_object*);
uint8_t l_Lean_ConstantInfo_isUnsafe(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_mkExtNameMap___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_mkModuleData___spec__4___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_mkInitialExtensionStates(lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_addExtraName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_isNamespace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___lambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Environment_find_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MapDeclarationExtension_contains___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionEntrySpec;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_updateEnvAttributes___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_mkExtNameMap___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__5;
static lean_object* l_Lean_importModules___closed__1;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_mkModuleData___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_pathExists(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__5(lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__2;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at_Lean_Environment_addExtraName___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_getNamespaceSet(lean_object*);
LEAN_EXPORT lean_object* l_Lean_finalizeImport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_mkModuleData___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_value_x21(lean_object*);
static lean_object* l_Lean_instInhabitedImport___closed__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_mkExtNameMap___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_enableDiag___lambda__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvironmentHeader_imports___default;
lean_object* lean_string_push(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Kernel_Diagnostics_recordUnfold___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_registerNamespace(lean_object*, lean_object*);
uint8_t l_Std_Format_isNil(lean_object*);
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_mkModuleData___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__21;
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__3;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_mkModuleData___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_setState___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at_Lean_Environment_addExtraName___spec__3(lean_object*, size_t, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__20;
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84_(lean_object*, lean_object*);
lean_object* l_Lean_initializing(lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__22;
static lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__4;
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__4;
static lean_object* l_Lean_TagDeclarationExtension_tag___closed__1;
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__4(lean_object*);
static lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__3;
lean_object* l_IO_println___at_Lean_instEval___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_instInhabitedEnvExtensionInterface___closed__6;
LEAN_EXPORT lean_object* l_Lean_EnvExtension_getState___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtensionDescr_toArrayFn___default(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnvExtension(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_numBuckets___at_Lean_Environment_displayStats___spec__3___boxed(lean_object*);
static lean_object* l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___closed__1;
static lean_object* l_Lean_EnvironmentHeader_imports___default___closed__1;
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_modifyState___rarg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getState___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_TagDeclarationExtension_isTagged(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_instToStringImport___closed__3;
LEAN_EXPORT lean_object* l_Lean_ImportState_moduleNames___default;
LEAN_EXPORT lean_object* l_Lean_Kernel_Diagnostics_isEnabled___boxed(lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__23;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_panic___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Kernel_Diagnostics_recordUnfold___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_instInhabitedPersistentEnvExtension___closed__2;
static lean_object* l_Lean_Environment_displayStats___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Kernel_instInhabitedDiagnostics___closed__1;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_mkModuleData___spec__4(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_instCoeNameImport(lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_setState___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_evalConstCheck(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_setState(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_mkModuleData___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToStringImport(lean_object*);
static lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__2;
uint8_t lean_expr_eqv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_NameSSet_insert___spec__7(lean_object*);
lean_object* l_List_toArray___rarg(lean_object*);
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___rarg(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_ensureExtensionsArraySize_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_finalizeImport___lambda__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___auto____x40_Lean_Environment___hyg_2986_;
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__18;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at_Lean_Environment_addExtraName___spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_freeRegions___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__1___closed__1;
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__13;
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkEmptyEnvironment___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_mkMapDeclarationExtension___rarg___closed__2;
static lean_object* l_Lean_Environment_displayStats___closed__7;
static lean_object* l_Lean_Environment_header___default___closed__1;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_finalizeImport___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_instModuleIdxBEq;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_finalizeImport___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Kernel_Diagnostics_recordUnfold___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getEntries___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkEmptyEnvironment___lambda__1(uint32_t, lean_object*, lean_object*);
static lean_object* l_Lean_MapDeclarationExtension_insert___rarg___closed__4;
static lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_finalizeImport___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_getState___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_eval_const(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Kernel_Diagnostics_recordUnfold___spec__6(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__16;
LEAN_EXPORT lean_object* l_Lean_instModuleIdxToString;
LEAN_EXPORT lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__1___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_mkEmptyEnvironment___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_Environment_addAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadEnvOfMonadLift___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__19;
static lean_object* l_Lean_TagDeclarationExtension_tag___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_Environment_getTrustLevel___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_importModules___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportState_regions___default;
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_getState(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_isDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_display_stats(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3___closed__1;
uint8_t l_Lean_NameMap_contains___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtension_modifyState___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__8;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_mkEmptyEnvironment___lambda__1___closed__6;
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__1;
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__1(lean_object*);
static size_t l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__2;
static lean_object* l_Lean_throwAlreadyImported___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_find_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__5___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__9;
lean_object* l_outOfBounds___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT uint8_t l_Array_binSearchAux___at_Lean_MapDeclarationExtension_contains___spec__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_Environment_registerNamePrefixes(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binSearchAux___at_Lean_TagDeclarationExtension_isTagged___spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Environment_displayStats___closed__4;
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnvExtensionInterface___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_importModules___lambda__2(lean_object*, lean_object*, uint32_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__1___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_SMap_contains___at_Lean_NameSSet_contains___spec__1(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSSet_instInhabited;
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__4;
LEAN_EXPORT lean_object* l_Lean_Environment_isSafeDefinition___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__8(lean_object*, size_t, size_t, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__27;
static lean_object* l_Lean_finalizeImport___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
static lean_object* l_Lean_instInhabitedModuleData___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_ensureExtensionsArraySize(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at_Lean_Environment_addExtraName___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at_Lean_Environment_addExtraName___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_mkExtNameMap___spec__2(lean_object*);
LEAN_EXPORT lean_object* l___auto____x40_Lean_Environment___hyg_2608_;
LEAN_EXPORT lean_object* l_Lean_withImportModules___rarg(lean_object*, lean_object*, uint32_t, lean_object*, lean_object*);
lean_object* l_EStateM_pure___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtensionState(lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__8;
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__24;
LEAN_EXPORT lean_object* l_Array_binSearchAux___at_Lean_MapDeclarationExtension_contains___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnvExtensionInterface___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_addDeclCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBTree_toArray___at_Lean_mkModuleData___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportState_moduleNameSet___default;
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_setState(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_setState___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_environment_set_main_module(lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__23;
static lean_object* l_Lean_TagDeclarationExtension_tag___closed__3;
static lean_object* l_Lean_instToStringImport___closed__1;
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__10;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg___closed__1;
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferrringUnsafe(lean_object*);
LEAN_EXPORT uint32_t lean_environment_trust_level(lean_object*);
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_mkExtNameMap___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_finalizeImport___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_find_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_modifyState___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_instToStringNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToStringImport___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_modifyState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_find_x3f___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_instantiateValueLevelParams_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_instInhabitedEnvExtensionInterface___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__11;
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_instToStringImport___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___lambda__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_kernel_set_diag(lean_object*, lean_object*);
lean_object* lean_update_env_attributes(lean_object*, lean_object*);
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__3;
static lean_object* l_Lean_TagDeclarationExtension_tag___closed__4;
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__13;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_Environment_isNamespaceName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_instantiateValueLevelParams_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6569_(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_MapDeclarationExtension_insert___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_instToStringImport___closed__2;
LEAN_EXPORT uint8_t l___private_Lean_Environment_0__Lean_Environment_isNamespaceName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_getModuleIdx_x3f___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_instantiateLevelParams(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_TagDeclarationExtension_tag___closed__2;
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withImportModules(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedImport;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_EnvExtensionInterfaceUnsafe_mkInitialExtStates___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_ensureExtensionsArraySize(lean_object*, lean_object*);
static lean_object* l_Lean_mkEmptyEnvironment___closed__2;
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__3(lean_object*);
extern lean_object* l_Std_Format_defWidth;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_mkExtNameMap___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getEntries___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_numBuckets___at_Lean_Environment_displayStats___spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_freeRegions___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__15;
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__14;
static lean_object* l_Lean_MapDeclarationExtension_instInhabited___closed__1;
LEAN_EXPORT lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__1___lambda__1(lean_object*, lean_object*);
static lean_object* l_Lean_Environment_displayStats___closed__6;
LEAN_EXPORT lean_object* l_Lean_registerEnvExtension___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_finalizeImport___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__26;
lean_object* lean_usize_to_nat(size_t);
static lean_object* l_Lean_Environment_evalConstCheck___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_isDefEqGuarded___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Environment_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__4(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Environment_isNamespace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at_Lean_TagDeclarationExtension_isTagged___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__26;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Environment_find_x3f___spec__3(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAlreadyImported___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_instInhabitedEnvExtensionInterface___closed__1;
lean_object* l_Lean_withImporting___rarg(lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__17;
LEAN_EXPORT lean_object* l_Lean_SMap_contains___at_Lean_Environment_addExtraName___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_finalizeImport___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_modifyState(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at_Lean_Environment_displayStats___spec__1(lean_object*);
static lean_object* l_Lean_Environment_registerNamespace___closed__1;
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_Diagnostics_unfoldCounter___default;
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_2563_(lean_object*);
static lean_object* l_Lean_mkTagDeclarationExtension___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_mkModuleData___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_EnvExtensionStateSpec___closed__1;
static lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__1;
LEAN_EXPORT lean_object* lean_environment_add(lean_object*, lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__20;
LEAN_EXPORT uint8_t l_Lean_Environment_getModuleIdx_x3f___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkModuleData___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_instInhabitedDiagnostics;
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_invalidExtMsg;
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp;
LEAN_EXPORT lean_object* l_Lean_Environment_hasUnsafe___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getEntries(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_finalizeImport___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Environment_find_x3f___spec__2(lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__1;
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Environment_hasUnsafe___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_instInhabitedEnvExtensionInterface___closed__5;
static lean_object* l_Lean_MapDeclarationExtension_insert___rarg___closed__1;
static lean_object* l_Lean_mkEmptyEnvironment___lambda__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_setState___rarg___lambda__1(lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__2;
LEAN_EXPORT lean_object* l_Lean_Environment_getModuleIdx_x3f___boxed(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1___closed__1;
LEAN_EXPORT uint8_t lean_kernel_diag_is_enabled(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
static lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6569____closed__1;
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__10;
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___boxed(lean_object*);
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg___closed__2;
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___rarg___lambda__2(lean_object*);
LEAN_EXPORT lean_object* lean_environment_mark_quot_init(lean_object*);
lean_object* lean_string_length(lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__17;
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__6;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_instReprImport___closed__1;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_mkExtNameMap___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
uint8_t l_List_beq___at___private_Lean_Declaration_0__Lean_beqConstantVal____x40_Lean_Declaration___hyg_433____spec__1(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprImport;
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at_Lean_MapDeclarationExtension_find_x3f___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_environment_main_module(lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtension_setState___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Environment_displayStats___closed__1;
static lean_object* l_Lean_instInhabitedPersistentEnvExtension___closed__3;
LEAN_EXPORT lean_object* l_Lean_EnvExtension_getState(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__4(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_ensureExtensionsArraySize_loop___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtensionDescr_statsFn___default___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_mkModuleData___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedModuleIdx;
LEAN_EXPORT lean_object* l_Lean_Environment_getModuleIdx_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_allImportedModuleNames(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_addDeclWithoutChecking___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_initFn____x40_Lean_Environment___hyg_1444_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__4___boxed(lean_object*);
lean_object* l_Lean_findOLean(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Import_runtimeOnly___default;
LEAN_EXPORT lean_object* l_Lean_Environment_isConstructor___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__1(lean_object*, lean_object*);
lean_object* lean_add_decl_without_checking(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_SMap_contains___at_Lean_Environment_addExtraName___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_instantiateTypeLevelParams___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_tag(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Environment_isSafeDefinition(lean_object*, lean_object*);
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__5;
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
static lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__3;
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Name_hash___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnvExtensionInterface___lambda__1(lean_object*, lean_object*);
static lean_object* l_Lean_mkTagDeclarationExtension___closed__1;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__18;
LEAN_EXPORT lean_object* l_panic___at_Lean_EnvExtensionInterfaceUnsafe_setState___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__2___boxed(lean_object*, lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
extern lean_object* l_Id_instMonad;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f_x27___at_Lean_Environment_find_x3f___spec__1(lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_contains___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___closed__1;
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__7;
static lean_object* l_Lean_throwAlreadyImported___rarg___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__10(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Lean_mkEmptyEnvironment___lambda__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__2(lean_object*, lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_mkModuleData___spec__2(lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__6;
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnvExtensionInterface;
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferrringUnsafe___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_instInhabitedPersistentEnvExtension___closed__5;
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Kernel_isDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*);
static uint32_t l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getState___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_Lean_NameHashSet_insert(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_addEntry(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_evalConstCheck___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_mkModuleData___closed__1;
static lean_object* l_Lean_TagDeclarationExtension_isTagged___closed__1;
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__5;
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__3;
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_resetDiag___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_finalizePersistentExtensions(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionStateSpec;
LEAN_EXPORT lean_object* l_panic___at_Lean_EnvExtensionInterfaceUnsafe_modifyState___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CompactedRegion_free___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_whnf___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtension_instInhabited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_getState___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__15;
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__7;
LEAN_EXPORT lean_object* l_Lean_EnvExtension_setState___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_persistentEnvExtensionsRef;
lean_object* lean_io_initializing(lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441_(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_finalizeImport___spec__2(lean_object*);
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__1;
LEAN_EXPORT lean_object* l_Lean_Environment_imports(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_mkModuleData___spec__6___boxed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtensionState___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnvExtensionInterface___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Kernel_Diagnostics_recordUnfold___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_namespacesExt;
LEAN_EXPORT lean_object* l_Lean_SMap_numBuckets___at_Lean_Environment_displayStats___spec__3(lean_object*);
static lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__5;
LEAN_EXPORT lean_object* l_Lean_EnvExtension_modifyState(lean_object*);
static lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__1;
static lean_object* l_Lean_instInhabitedPersistentEnvExtension___closed__1;
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_isTagged___boxed(lean_object*, lean_object*, lean_object*);
static size_t l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__1;
static lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__6;
static lean_object* l_Lean_mkMapDeclarationExtension___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_importModulesCore___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleIdx_toNat(lean_object*);
extern lean_object* l_Lean_NameSet_instInhabited;
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2(lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_check___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__9;
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__12;
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at_Lean_MapDeclarationExtension_find_x3f___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instBEqNat;
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___closed__2;
static lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__2;
static lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Environment_getModuleIdxFor_x3f___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
LEAN_EXPORT lean_object* l_Lean_Kernel_isDiagnosticsEnabled___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_Environment_isQuotInit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnvExtensionInterface___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
static lean_object* l_Lean_MapDeclarationExtension_find_x3f___rarg___closed__1;
size_t lean_array_size(lean_object*);
static lean_object* l_Lean_Environment_displayStats___closed__5;
lean_object* l_Array_foldlMUnsafe_fold___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CompactedRegion_isMemoryMapped___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_resetDiag(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkModuleData___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_write_module(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_MapDeclarationExtension_insert___rarg___closed__3;
static lean_object* l_Lean_mkMapDeclarationExtension___rarg___closed__3;
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_modifyState___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_fold___at_Lean_mkModuleData___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferrringUnsafe___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_getModuleIdxFor_x3f___spec__1___boxed(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_environment_quot_init(lean_object*);
static lean_object* l_Lean_mkModuleData___closed__2;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_getNamespaceSet___boxed(lean_object*);
static lean_object* l_Lean_mkEmptyEnvironment___lambda__1___closed__1;
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_evalConstCheck___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__2(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__6;
static lean_object* l_Array_qsort_sort___at_Lean_mkTagDeclarationExtension___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Environment_find_x3f___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___closed__1;
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at_Lean_MapDeclarationExtension_contains___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__19;
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__5(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Environment_displayStats___closed__2;
LEAN_EXPORT lean_object* l_Lean_saveModuleData___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadEnvOfMonadLift___rarg(lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_SMap_insert___at_Lean_NameSSet_insert___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_RBNode_find___at_Lean_NameMap_find_x3f___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_find_x3f___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_mk_empty_environment(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___lambda__1(lean_object*, lean_object*);
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__2;
static lean_object* l___auto____x40_Lean_Environment___hyg_2608____closed__22;
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg___closed__2;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_mkExtNameMap___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_compacted_region_free(size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__5___boxed(lean_object*, lean_object*);
lean_object* lean_runtime_mark_persistent(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___lambda__2___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_setState(lean_object*, lean_object*);
lean_object* l_EStateM_bind___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_enableDiag___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvironmentHeader_moduleData___default;
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_equivInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_import_modules(lean_object*, lean_object*, uint32_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_registerExt(lean_object*);
uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_NameSSet_insert___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_importModules___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Environment_find_x3f___spec__2___boxed(lean_object*, lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__4;
LEAN_EXPORT lean_object* l_Array_binSearchAux___at_Lean_MapDeclarationExtension_find_x3f___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_kernel_whnf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_mkEmptyEnvironment___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_finalizeImport___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_mkModuleData___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_TagDeclarationExtension_tag___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_EnvExtensionInterfaceUnsafe_mkInitialExtStates___spec__1(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___auto____x40_Lean_Environment___hyg_3303_;
LEAN_EXPORT lean_object* lean_kernel_record_unfold(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_setState___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_contains(lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvironmentHeader_mainModule___default;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* lean_environment_free_regions(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Repr_0__Nat_reprFast(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Environment_displayStats___spec__2(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__3;
static lean_object* l_List_foldl___at_Lean_Environment_displayStats___spec__2___closed__1;
static lean_object* l_Lean_instInhabitedPersistentEnvExtension___closed__4;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnvExtension_setState(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withImportModules___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_header___default;
lean_object* lean_save_module_data(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkEmptyEnvironment___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_setState___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
static lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__14;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__6___boxed(lean_object*, lean_object*);
static lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_mkTagDeclarationExtension___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__3;
static lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__3;
LEAN_EXPORT lean_object* l_Lean_ModuleIdx_toNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
static lean_object* l_Lean_instInhabitedModuleData___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwAlreadyImported(lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
static lean_object* _init_l_Lean_EnvExtensionStateSpec___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, lean_box(0));
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_EnvExtensionStateSpec() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_EnvExtensionStateSpec___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_instInhabitedEnvExtensionState() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_instModuleIdxBEq() {
_start:
{
lean_object* x_1; 
x_1 = l_instBEqNat;
return x_1;
}
}
static lean_object* _init_l_Lean_instModuleIdxToString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instToStringNat), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_instModuleIdxToString() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_instModuleIdxToString___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleIdx_toNat(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleIdx_toNat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_ModuleIdx_toNat(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_instInhabitedModuleIdx() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
static uint8_t _init_l_Lean_Import_runtimeOnly___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("module", 6, 6);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__2;
x_3 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" := ", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__4;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__3;
x_2 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__5;
x_3 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(",", 1, 1);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__8;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("runtimeOnly", 11, 11);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__10;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(15u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("{ ", 2, 2);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__13;
x_2 = lean_string_length(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__14;
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__13;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" }", 2, 2);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__17;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("false", 5, 5);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__19;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__12;
x_2 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__20;
x_3 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__22() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__21;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__23() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("true", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__23;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__12;
x_2 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__24;
x_3 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__26() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__25;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_Name_reprPrec(x_3, x_4);
x_6 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__7;
x_7 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = 0;
x_9 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set_uint8(x_9, sizeof(void*)*1, x_8);
x_10 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__6;
x_11 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__9;
x_13 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_box(1);
x_15 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__11;
x_17 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__5;
x_19 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
lean_dec(x_1);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_21 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__22;
x_22 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
x_23 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__16;
x_24 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__18;
x_26 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__15;
x_28 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set_uint8(x_29, sizeof(void*)*1, x_8);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_30 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__26;
x_31 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_31, 0, x_19);
lean_ctor_set(x_31, 1, x_30);
x_32 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__16;
x_33 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__18;
x_35 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__15;
x_37 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set_uint8(x_38, sizeof(void*)*1, x_8);
return x_38;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84_(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_instReprImport___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_instReprImport() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_instReprImport___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_instInhabitedImport___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = 0;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_instInhabitedImport() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_instInhabitedImport___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeNameImport(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = 0;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_instToStringImport___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
static lean_object* _init_l_Lean_instToStringImport___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_instToStringImport___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_instToStringImport___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_instToStringImport___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" (runtime)", 10, 10);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_instToStringImport(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = 1;
x_4 = l_Lean_instToStringImport___closed__1;
x_5 = l_Lean_Name_toString(x_2, x_3, x_4);
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
lean_dec(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_instToStringImport___closed__2;
x_8 = lean_string_append(x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_instToStringImport___closed__3;
x_10 = lean_string_append(x_5, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToStringImport___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_instToStringImport___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_CompactedRegion_isMemoryMapped___boxed(lean_object* x_1) {
_start:
{
size_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_3 = lean_compacted_region_is_memory_mapped(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_CompactedRegion_free___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_compacted_region_free(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_EnvExtensionEntrySpec() {
_start:
{
return lean_box(0);
}
}
static lean_object* _init_l_Lean_instInhabitedModuleData___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_instInhabitedModuleData___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_instInhabitedModuleData___closed__1;
x_2 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 2, x_1);
lean_ctor_set(x_2, 3, x_1);
lean_ctor_set(x_2, 4, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_instInhabitedModuleData() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_instInhabitedModuleData___closed__2;
return x_1;
}
}
static uint32_t _init_l_Lean_EnvironmentHeader_trustLevel___default() {
_start:
{
uint32_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_EnvironmentHeader_quotInit___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l_Lean_EnvironmentHeader_mainModule___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_EnvironmentHeader_imports___default___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_EnvironmentHeader_imports___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_EnvironmentHeader_imports___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_EnvironmentHeader_regions___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_EnvironmentHeader_imports___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_EnvironmentHeader_moduleNames___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_EnvironmentHeader_imports___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_EnvironmentHeader_moduleData___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_EnvironmentHeader_imports___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Environment_header___default___closed__1() {
_start:
{
uint32_t x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 0;
x_2 = 0;
x_3 = lean_box(0);
x_4 = l_Lean_EnvironmentHeader_imports___default___closed__1;
x_5 = lean_alloc_ctor(0, 5, 5);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_4);
lean_ctor_set(x_5, 4, x_4);
lean_ctor_set_uint32(x_5, sizeof(void*)*5, x_1);
lean_ctor_set_uint8(x_5, sizeof(void*)*5 + 4, x_2);
return x_5;
}
}
static lean_object* _init_l_Lean_Environment_header___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Environment_header___default___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__4(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = l_Lean_Name_hash___override(x_9);
x_12 = lean_uint64_to_usize(x_11);
x_13 = 1;
x_14 = lean_usize_sub(x_1, x_13);
x_15 = 5;
x_16 = lean_usize_mul(x_15, x_14);
x_17 = lean_usize_shift_right(x_12, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_20 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3(x_6, x_17, x_1, x_9, x_10);
x_4 = lean_box(0);
x_5 = x_19;
x_6 = x_20;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_name_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__1() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 1;
x_2 = 5;
x_3 = lean_usize_shift_left(x_1, x_2);
return x_3;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__2() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 1;
x_2 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__1;
x_3 = lean_usize_sub(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__2;
x_11 = lean_usize_land(x_2, x_10);
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(0);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_name_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_name_eq(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = lean_usize_shift_right(x_2, x_9);
x_37 = lean_usize_add(x_3, x_8);
x_38 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = lean_usize_shift_right(x_2, x_9);
x_42 = lean_usize_add(x_3, x_8);
x_43 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__2;
x_52 = lean_usize_land(x_2, x_51);
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(0);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_name_eq(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = lean_usize_shift_right(x_2, x_50);
x_74 = lean_usize_add(x_3, x_49);
x_75 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_1);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; size_t x_85; uint8_t x_86; 
x_83 = lean_unsigned_to_nat(0u);
x_84 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__5(x_1, x_83, x_4, x_5);
x_85 = 7;
x_86 = lean_usize_dec_le(x_85, x_3);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_87 = l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(x_84);
x_88 = lean_unsigned_to_nat(4u);
x_89 = lean_nat_dec_lt(x_87, x_88);
lean_dec(x_87);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_90 = lean_ctor_get(x_84, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_84, 1);
lean_inc(x_91);
lean_dec(x_84);
x_92 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__3;
x_93 = l_Lean_PersistentHashMap_insertAux_traverse___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__4(x_3, x_90, x_91, lean_box(0), x_83, x_92);
lean_dec(x_91);
lean_dec(x_90);
return x_93;
}
else
{
return x_84;
}
}
else
{
return x_84;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; size_t x_99; uint8_t x_100; 
x_94 = lean_ctor_get(x_1, 0);
x_95 = lean_ctor_get(x_1, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_1);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_unsigned_to_nat(0u);
x_98 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__5(x_96, x_97, x_4, x_5);
x_99 = 7;
x_100 = lean_usize_dec_le(x_99, x_3);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_101 = l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(x_98);
x_102 = lean_unsigned_to_nat(4u);
x_103 = lean_nat_dec_lt(x_101, x_102);
lean_dec(x_101);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_104 = lean_ctor_get(x_98, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_98, 1);
lean_inc(x_105);
lean_dec(x_98);
x_106 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__3;
x_107 = l_Lean_PersistentHashMap_insertAux_traverse___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__4(x_3, x_104, x_105, lean_box(0), x_97, x_106);
lean_dec(x_105);
lean_dec(x_104);
return x_107;
}
else
{
return x_98;
}
}
else
{
return x_98;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint64_t x_4; size_t x_5; size_t x_6; lean_object* x_7; 
x_4 = l_Lean_Name_hash___override(x_2);
x_5 = lean_uint64_to_usize(x_4);
x_6 = 1;
x_7 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3(x_1, x_5, x_6, x_2, x_3);
return x_7;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash___override(x_4);
x_8 = 32;
x_9 = lean_uint64_shift_right(x_7, x_8);
x_10 = lean_uint64_xor(x_7, x_9);
x_11 = 16;
x_12 = lean_uint64_shift_right(x_10, x_11);
x_13 = lean_uint64_xor(x_10, x_12);
x_14 = lean_uint64_to_usize(x_13);
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 1;
x_17 = lean_usize_sub(x_15, x_16);
x_18 = lean_usize_land(x_14, x_17);
x_19 = lean_array_uget(x_1, x_18);
lean_ctor_set(x_2, 2, x_19);
x_20 = lean_array_uset(x_1, x_18, x_2);
x_1 = x_20;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_25 = lean_array_get_size(x_1);
x_26 = l_Lean_Name_hash___override(x_22);
x_27 = 32;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = 16;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = lean_uint64_to_usize(x_32);
x_34 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_35 = 1;
x_36 = lean_usize_sub(x_34, x_35);
x_37 = lean_usize_land(x_33, x_36);
x_38 = lean_array_uget(x_1, x_37);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_23);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_array_uset(x_1, x_37, x_39);
x_1 = x_40;
x_2 = x_24;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_DHashMap_Internal_AssocList_foldlM___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__9(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_mk_array(x_4, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Std_DHashMap_Internal_Raw_u2080_expand_go___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__8(x_7, x_1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_DHashMap_Internal_AssocList_replace___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__10(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_DHashMap_Internal_AssocList_replace___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__10(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_PersistentHashMap_insert___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__2(x_6, x_2, x_3);
x_8 = 0;
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set_uint8(x_1, sizeof(void*)*2, x_8);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Lean_PersistentHashMap_insert___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__2(x_10, x_2, x_3);
x_12 = 0;
x_13 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_11);
lean_ctor_set_uint8(x_13, sizeof(void*)*2, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_1);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; uint64_t x_23; uint64_t x_24; uint64_t x_25; uint64_t x_26; size_t x_27; size_t x_28; size_t x_29; size_t x_30; size_t x_31; lean_object* x_32; uint8_t x_33; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = lean_array_get_size(x_18);
x_20 = l_Lean_Name_hash___override(x_2);
x_21 = 32;
x_22 = lean_uint64_shift_right(x_20, x_21);
x_23 = lean_uint64_xor(x_20, x_22);
x_24 = 16;
x_25 = lean_uint64_shift_right(x_23, x_24);
x_26 = lean_uint64_xor(x_23, x_25);
x_27 = lean_uint64_to_usize(x_26);
x_28 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_29 = 1;
x_30 = lean_usize_sub(x_28, x_29);
x_31 = lean_usize_land(x_27, x_30);
x_32 = lean_array_uget(x_18, x_31);
x_33 = l_Std_DHashMap_Internal_AssocList_contains___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__6(x_2, x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_17, x_34);
lean_dec(x_17);
x_36 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_36, 0, x_2);
lean_ctor_set(x_36, 1, x_3);
lean_ctor_set(x_36, 2, x_32);
x_37 = lean_array_uset(x_18, x_31, x_36);
x_38 = lean_unsigned_to_nat(4u);
x_39 = lean_nat_mul(x_35, x_38);
x_40 = lean_unsigned_to_nat(3u);
x_41 = lean_nat_div(x_39, x_40);
lean_dec(x_39);
x_42 = lean_array_get_size(x_37);
x_43 = lean_nat_dec_le(x_41, x_42);
lean_dec(x_42);
lean_dec(x_41);
if (x_43 == 0)
{
lean_object* x_44; uint8_t x_45; 
x_44 = l_Std_DHashMap_Internal_Raw_u2080_expand___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__7(x_37);
lean_ctor_set(x_15, 1, x_44);
lean_ctor_set(x_15, 0, x_35);
x_45 = 1;
lean_ctor_set_uint8(x_1, sizeof(void*)*2, x_45);
return x_1;
}
else
{
uint8_t x_46; 
lean_ctor_set(x_15, 1, x_37);
lean_ctor_set(x_15, 0, x_35);
x_46 = 1;
lean_ctor_set_uint8(x_1, sizeof(void*)*2, x_46);
return x_1;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_47 = lean_box(0);
x_48 = lean_array_uset(x_18, x_31, x_47);
x_49 = l_Std_DHashMap_Internal_AssocList_replace___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__10(x_2, x_3, x_32);
x_50 = lean_array_uset(x_48, x_31, x_49);
lean_ctor_set(x_15, 1, x_50);
x_51 = 1;
lean_ctor_set_uint8(x_1, sizeof(void*)*2, x_51);
return x_1;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint64_t x_55; uint64_t x_56; uint64_t x_57; uint64_t x_58; uint64_t x_59; uint64_t x_60; uint64_t x_61; size_t x_62; size_t x_63; size_t x_64; size_t x_65; size_t x_66; lean_object* x_67; uint8_t x_68; 
x_52 = lean_ctor_get(x_15, 0);
x_53 = lean_ctor_get(x_15, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_15);
x_54 = lean_array_get_size(x_53);
x_55 = l_Lean_Name_hash___override(x_2);
x_56 = 32;
x_57 = lean_uint64_shift_right(x_55, x_56);
x_58 = lean_uint64_xor(x_55, x_57);
x_59 = 16;
x_60 = lean_uint64_shift_right(x_58, x_59);
x_61 = lean_uint64_xor(x_58, x_60);
x_62 = lean_uint64_to_usize(x_61);
x_63 = lean_usize_of_nat(x_54);
lean_dec(x_54);
x_64 = 1;
x_65 = lean_usize_sub(x_63, x_64);
x_66 = lean_usize_land(x_62, x_65);
x_67 = lean_array_uget(x_53, x_66);
x_68 = l_Std_DHashMap_Internal_AssocList_contains___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__6(x_2, x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_69 = lean_unsigned_to_nat(1u);
x_70 = lean_nat_add(x_52, x_69);
lean_dec(x_52);
x_71 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_71, 0, x_2);
lean_ctor_set(x_71, 1, x_3);
lean_ctor_set(x_71, 2, x_67);
x_72 = lean_array_uset(x_53, x_66, x_71);
x_73 = lean_unsigned_to_nat(4u);
x_74 = lean_nat_mul(x_70, x_73);
x_75 = lean_unsigned_to_nat(3u);
x_76 = lean_nat_div(x_74, x_75);
lean_dec(x_74);
x_77 = lean_array_get_size(x_72);
x_78 = lean_nat_dec_le(x_76, x_77);
lean_dec(x_77);
lean_dec(x_76);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_79 = l_Std_DHashMap_Internal_Raw_u2080_expand___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__7(x_72);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_70);
lean_ctor_set(x_80, 1, x_79);
x_81 = 1;
lean_ctor_set(x_1, 0, x_80);
lean_ctor_set_uint8(x_1, sizeof(void*)*2, x_81);
return x_1;
}
else
{
lean_object* x_82; uint8_t x_83; 
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_70);
lean_ctor_set(x_82, 1, x_72);
x_83 = 1;
lean_ctor_set(x_1, 0, x_82);
lean_ctor_set_uint8(x_1, sizeof(void*)*2, x_83);
return x_1;
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_84 = lean_box(0);
x_85 = lean_array_uset(x_53, x_66, x_84);
x_86 = l_Std_DHashMap_Internal_AssocList_replace___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__10(x_2, x_3, x_67);
x_87 = lean_array_uset(x_85, x_66, x_86);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_52);
lean_ctor_set(x_88, 1, x_87);
x_89 = 1;
lean_ctor_set(x_1, 0, x_88);
lean_ctor_set_uint8(x_1, sizeof(void*)*2, x_89);
return x_1;
}
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint64_t x_96; uint64_t x_97; uint64_t x_98; uint64_t x_99; uint64_t x_100; uint64_t x_101; uint64_t x_102; size_t x_103; size_t x_104; size_t x_105; size_t x_106; size_t x_107; lean_object* x_108; uint8_t x_109; 
x_90 = lean_ctor_get(x_1, 0);
x_91 = lean_ctor_get(x_1, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_1);
x_92 = lean_ctor_get(x_90, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_90, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_94 = x_90;
} else {
 lean_dec_ref(x_90);
 x_94 = lean_box(0);
}
x_95 = lean_array_get_size(x_93);
x_96 = l_Lean_Name_hash___override(x_2);
x_97 = 32;
x_98 = lean_uint64_shift_right(x_96, x_97);
x_99 = lean_uint64_xor(x_96, x_98);
x_100 = 16;
x_101 = lean_uint64_shift_right(x_99, x_100);
x_102 = lean_uint64_xor(x_99, x_101);
x_103 = lean_uint64_to_usize(x_102);
x_104 = lean_usize_of_nat(x_95);
lean_dec(x_95);
x_105 = 1;
x_106 = lean_usize_sub(x_104, x_105);
x_107 = lean_usize_land(x_103, x_106);
x_108 = lean_array_uget(x_93, x_107);
x_109 = l_Std_DHashMap_Internal_AssocList_contains___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__6(x_2, x_108);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; 
x_110 = lean_unsigned_to_nat(1u);
x_111 = lean_nat_add(x_92, x_110);
lean_dec(x_92);
x_112 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_112, 0, x_2);
lean_ctor_set(x_112, 1, x_3);
lean_ctor_set(x_112, 2, x_108);
x_113 = lean_array_uset(x_93, x_107, x_112);
x_114 = lean_unsigned_to_nat(4u);
x_115 = lean_nat_mul(x_111, x_114);
x_116 = lean_unsigned_to_nat(3u);
x_117 = lean_nat_div(x_115, x_116);
lean_dec(x_115);
x_118 = lean_array_get_size(x_113);
x_119 = lean_nat_dec_le(x_117, x_118);
lean_dec(x_118);
lean_dec(x_117);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; uint8_t x_122; lean_object* x_123; 
x_120 = l_Std_DHashMap_Internal_Raw_u2080_expand___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__7(x_113);
if (lean_is_scalar(x_94)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_94;
}
lean_ctor_set(x_121, 0, x_111);
lean_ctor_set(x_121, 1, x_120);
x_122 = 1;
x_123 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_91);
lean_ctor_set_uint8(x_123, sizeof(void*)*2, x_122);
return x_123;
}
else
{
lean_object* x_124; uint8_t x_125; lean_object* x_126; 
if (lean_is_scalar(x_94)) {
 x_124 = lean_alloc_ctor(0, 2, 0);
} else {
 x_124 = x_94;
}
lean_ctor_set(x_124, 0, x_111);
lean_ctor_set(x_124, 1, x_113);
x_125 = 1;
x_126 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_91);
lean_ctor_set_uint8(x_126, sizeof(void*)*2, x_125);
return x_126;
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; uint8_t x_132; lean_object* x_133; 
x_127 = lean_box(0);
x_128 = lean_array_uset(x_93, x_107, x_127);
x_129 = l_Std_DHashMap_Internal_AssocList_replace___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__10(x_2, x_3, x_108);
x_130 = lean_array_uset(x_128, x_107, x_129);
if (lean_is_scalar(x_94)) {
 x_131 = lean_alloc_ctor(0, 2, 0);
} else {
 x_131 = x_94;
}
lean_ctor_set(x_131, 0, x_92);
lean_ctor_set(x_131, 1, x_130);
x_132 = 1;
x_133 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_91);
lean_ctor_set_uint8(x_133, sizeof(void*)*2, x_132);
return x_133;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_Environment_addAux(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_Lean_ConstantInfo_name(x_2);
x_6 = l_Lean_SMap_insert___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__1(x_4, x_5, x_2);
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
x_10 = lean_ctor_get(x_1, 3);
x_11 = lean_ctor_get(x_1, 4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_12 = l_Lean_ConstantInfo_name(x_2);
x_13 = l_Lean_SMap_insert___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__1(x_8, x_12, x_2);
x_14 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set(x_14, 2, x_9);
lean_ctor_set(x_14, 3, x_10);
lean_ctor_set(x_14, 4, x_11);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Lean_PersistentHashMap_insertAux_traverse___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__4(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_DHashMap_Internal_AssocList_contains___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__6(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at_Lean_Environment_addExtraName___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
x_14 = 1;
return x_14;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at_Lean_Environment_addExtraName___spec__3(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__2;
x_7 = lean_usize_land(x_2, x_6);
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_eq(x_3, x_11);
lean_dec(x_11);
return x_12;
}
case 1:
{
lean_object* x_13; size_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_usize_shift_right(x_2, x_5);
x_1 = x_13;
x_2 = x_14;
goto _start;
}
default: 
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_Lean_PersistentHashMap_containsAtAux___at_Lean_Environment_addExtraName___spec__4(x_17, x_18, lean_box(0), x_19, x_3);
lean_dec(x_18);
lean_dec(x_17);
return x_20;
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at_Lean_Environment_addExtraName___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; size_t x_4; uint8_t x_5; 
x_3 = l_Lean_Name_hash___override(x_2);
x_4 = lean_uint64_to_usize(x_3);
x_5 = l_Lean_PersistentHashMap_containsAux___at_Lean_Environment_addExtraName___spec__3(x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Lean_SMap_contains___at_Lean_Environment_addExtraName___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; uint64_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; size_t x_19; lean_object* x_20; uint8_t x_21; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash___override(x_2);
x_9 = 32;
x_10 = lean_uint64_shift_right(x_8, x_9);
x_11 = lean_uint64_xor(x_8, x_10);
x_12 = 16;
x_13 = lean_uint64_shift_right(x_11, x_12);
x_14 = lean_uint64_xor(x_11, x_13);
x_15 = lean_uint64_to_usize(x_14);
x_16 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_17 = 1;
x_18 = lean_usize_sub(x_16, x_17);
x_19 = lean_usize_land(x_15, x_18);
x_20 = lean_array_uget(x_6, x_19);
lean_dec(x_6);
x_21 = l_Std_DHashMap_Internal_AssocList_contains___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__6(x_2, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = l_Lean_PersistentHashMap_contains___at_Lean_Environment_addExtraName___spec__2(x_5, x_2);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_5);
x_23 = 1;
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; uint64_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; size_t x_38; lean_object* x_39; uint8_t x_40; 
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
lean_dec(x_1);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_array_get_size(x_25);
x_27 = l_Lean_Name_hash___override(x_2);
x_28 = 32;
x_29 = lean_uint64_shift_right(x_27, x_28);
x_30 = lean_uint64_xor(x_27, x_29);
x_31 = 16;
x_32 = lean_uint64_shift_right(x_30, x_31);
x_33 = lean_uint64_xor(x_30, x_32);
x_34 = lean_uint64_to_usize(x_33);
x_35 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_36 = 1;
x_37 = lean_usize_sub(x_35, x_36);
x_38 = lean_usize_land(x_34, x_37);
x_39 = lean_array_uget(x_25, x_38);
lean_dec(x_25);
x_40 = l_Std_DHashMap_Internal_AssocList_contains___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__6(x_2, x_39);
lean_dec(x_39);
return x_40;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_addExtraName(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
lean_inc(x_4);
x_8 = l_Lean_SMap_contains___at_Lean_Environment_addExtraName___spec__1(x_4, x_2);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 4);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 3);
lean_dec(x_11);
x_12 = lean_ctor_get(x_1, 2);
lean_dec(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_dec(x_13);
x_14 = lean_ctor_get(x_1, 0);
lean_dec(x_14);
x_15 = lean_box(0);
x_16 = l_Lean_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_6, x_2, x_15);
lean_ctor_set(x_1, 3, x_16);
return x_1;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_1);
x_17 = lean_box(0);
x_18 = l_Lean_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_6, x_2, x_17);
x_19 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_19, 0, x_3);
lean_ctor_set(x_19, 1, x_4);
lean_ctor_set(x_19, 2, x_5);
lean_ctor_set(x_19, 3, x_18);
lean_ctor_set(x_19, 4, x_7);
return x_19;
}
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at_Lean_Environment_addExtraName___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Lean_PersistentHashMap_containsAtAux___at_Lean_Environment_addExtraName___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at_Lean_Environment_addExtraName___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Lean_PersistentHashMap_containsAux___at_Lean_Environment_addExtraName___spec__3(x_1, x_4, x_3);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at_Lean_Environment_addExtraName___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_PersistentHashMap_contains___at_Lean_Environment_addExtraName___spec__2(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_contains___at_Lean_Environment_addExtraName___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_SMap_contains___at_Lean_Environment_addExtraName___spec__1(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Environment_find_x3f___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Environment_find_x3f___spec__3(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; size_t x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = 5;
x_7 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__2;
x_8 = lean_usize_land(x_2, x_7);
x_9 = lean_usize_to_nat(x_8);
x_10 = lean_box(2);
x_11 = lean_array_get(x_10, x_5, x_9);
lean_dec(x_9);
lean_dec(x_5);
switch (lean_obj_tag(x_11)) {
case 0:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_name_eq(x_3, x_12);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_13);
lean_free_object(x_1);
x_15 = lean_box(0);
return x_15;
}
else
{
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
case 1:
{
lean_object* x_16; size_t x_17; 
lean_free_object(x_1);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_usize_shift_right(x_2, x_6);
x_1 = x_16;
x_2 = x_17;
goto _start;
}
default: 
{
lean_object* x_19; 
lean_free_object(x_1);
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; size_t x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = 5;
x_22 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__2;
x_23 = lean_usize_land(x_2, x_22);
x_24 = lean_usize_to_nat(x_23);
x_25 = lean_box(2);
x_26 = lean_array_get(x_25, x_20, x_24);
lean_dec(x_24);
lean_dec(x_20);
switch (lean_obj_tag(x_26)) {
case 0:
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_name_eq(x_3, x_27);
lean_dec(x_27);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_28);
x_30 = lean_box(0);
return x_30;
}
else
{
lean_object* x_31; 
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_28);
return x_31;
}
}
case 1:
{
lean_object* x_32; size_t x_33; 
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_usize_shift_right(x_2, x_21);
x_1 = x_32;
x_2 = x_33;
goto _start;
}
default: 
{
lean_object* x_35; 
x_35 = lean_box(0);
return x_35;
}
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_1, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_1, 1);
lean_inc(x_37);
lean_dec(x_1);
x_38 = lean_unsigned_to_nat(0u);
x_39 = l_Lean_PersistentHashMap_findAtAux___at_Lean_Environment_find_x3f___spec__4(x_36, x_37, lean_box(0), x_38, x_3);
lean_dec(x_37);
lean_dec(x_36);
return x_39;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Environment_find_x3f___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; size_t x_4; lean_object* x_5; 
x_3 = l_Lean_Name_hash___override(x_2);
x_4 = lean_uint64_to_usize(x_3);
x_5 = l_Lean_PersistentHashMap_findAux___at_Lean_Environment_find_x3f___spec__3(x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_find_x3f___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f_x27___at_Lean_Environment_find_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; uint64_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash___override(x_2);
x_9 = 32;
x_10 = lean_uint64_shift_right(x_8, x_9);
x_11 = lean_uint64_xor(x_8, x_10);
x_12 = 16;
x_13 = lean_uint64_shift_right(x_11, x_12);
x_14 = lean_uint64_xor(x_11, x_13);
x_15 = lean_uint64_to_usize(x_14);
x_16 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_17 = 1;
x_18 = lean_usize_sub(x_16, x_17);
x_19 = lean_usize_land(x_15, x_18);
x_20 = lean_array_uget(x_6, x_19);
lean_dec(x_6);
x_21 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_find_x3f___spec__5(x_2, x_20);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
x_22 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Environment_find_x3f___spec__2(x_5, x_2);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 0);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; uint64_t x_33; uint64_t x_34; uint64_t x_35; size_t x_36; size_t x_37; size_t x_38; size_t x_39; size_t x_40; lean_object* x_41; lean_object* x_42; 
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_array_get_size(x_27);
x_29 = l_Lean_Name_hash___override(x_2);
x_30 = 32;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = 16;
x_34 = lean_uint64_shift_right(x_32, x_33);
x_35 = lean_uint64_xor(x_32, x_34);
x_36 = lean_uint64_to_usize(x_35);
x_37 = lean_usize_of_nat(x_28);
lean_dec(x_28);
x_38 = 1;
x_39 = lean_usize_sub(x_37, x_38);
x_40 = lean_usize_land(x_36, x_39);
x_41 = lean_array_uget(x_27, x_40);
lean_dec(x_27);
x_42 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_find_x3f___spec__5(x_2, x_41);
lean_dec(x_41);
return x_42;
}
}
}
LEAN_EXPORT lean_object* lean_environment_find(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_SMap_find_x3f_x27___at_Lean_Environment_find_x3f___spec__1(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Environment_find_x3f___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PersistentHashMap_findAtAux___at_Lean_Environment_find_x3f___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Environment_find_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Lean_PersistentHashMap_findAux___at_Lean_Environment_find_x3f___spec__3(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Environment_find_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Environment_find_x3f___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_find_x3f___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_find_x3f___spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f_x27___at_Lean_Environment_find_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_SMap_find_x3f_x27___at_Lean_Environment_find_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_Environment_contains(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_SMap_contains___at_Lean_Environment_addExtraName___spec__1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_contains___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Environment_contains(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_imports(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 4);
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_imports___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Environment_imports(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_allImportedModuleNames(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 4);
x_3 = lean_ctor_get(x_2, 3);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_allImportedModuleNames___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Environment_allImportedModuleNames(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lean_environment_set_main_module(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 4);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_dec(x_6);
lean_ctor_set(x_4, 0, x_2);
return x_1;
}
else
{
uint32_t x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get_uint32(x_4, sizeof(void*)*5);
x_8 = lean_ctor_get_uint8(x_4, sizeof(void*)*5 + 4);
x_9 = lean_ctor_get(x_4, 1);
x_10 = lean_ctor_get(x_4, 2);
x_11 = lean_ctor_get(x_4, 3);
x_12 = lean_ctor_get(x_4, 4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_4);
x_13 = lean_alloc_ctor(0, 5, 5);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_9);
lean_ctor_set(x_13, 2, x_10);
lean_ctor_set(x_13, 3, x_11);
lean_ctor_set(x_13, 4, x_12);
lean_ctor_set_uint32(x_13, sizeof(void*)*5, x_7);
lean_ctor_set_uint8(x_13, sizeof(void*)*5 + 4, x_8);
lean_ctor_set(x_1, 4, x_13);
return x_1;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint32_t x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_14 = lean_ctor_get(x_1, 4);
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
x_17 = lean_ctor_get(x_1, 2);
x_18 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_1);
x_19 = lean_ctor_get_uint32(x_14, sizeof(void*)*5);
x_20 = lean_ctor_get_uint8(x_14, sizeof(void*)*5 + 4);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_14, 2);
lean_inc(x_22);
x_23 = lean_ctor_get(x_14, 3);
lean_inc(x_23);
x_24 = lean_ctor_get(x_14, 4);
lean_inc(x_24);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 lean_ctor_release(x_14, 2);
 lean_ctor_release(x_14, 3);
 lean_ctor_release(x_14, 4);
 x_25 = x_14;
} else {
 lean_dec_ref(x_14);
 x_25 = lean_box(0);
}
if (lean_is_scalar(x_25)) {
 x_26 = lean_alloc_ctor(0, 5, 5);
} else {
 x_26 = x_25;
}
lean_ctor_set(x_26, 0, x_2);
lean_ctor_set(x_26, 1, x_21);
lean_ctor_set(x_26, 2, x_22);
lean_ctor_set(x_26, 3, x_23);
lean_ctor_set(x_26, 4, x_24);
lean_ctor_set_uint32(x_26, sizeof(void*)*5, x_19);
lean_ctor_set_uint8(x_26, sizeof(void*)*5 + 4, x_20);
x_27 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_27, 0, x_15);
lean_ctor_set(x_27, 1, x_16);
lean_ctor_set(x_27, 2, x_17);
lean_ctor_set(x_27, 3, x_18);
lean_ctor_set(x_27, 4, x_26);
return x_27;
}
}
}
LEAN_EXPORT lean_object* lean_environment_main_module(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 4);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lean_environment_mark_quot_init(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 4);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 1;
lean_ctor_set_uint8(x_3, sizeof(void*)*5 + 4, x_5);
return x_1;
}
else
{
uint32_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_6 = lean_ctor_get_uint32(x_3, sizeof(void*)*5);
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
x_9 = lean_ctor_get(x_3, 2);
x_10 = lean_ctor_get(x_3, 3);
x_11 = lean_ctor_get(x_3, 4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_12 = 1;
x_13 = lean_alloc_ctor(0, 5, 5);
lean_ctor_set(x_13, 0, x_7);
lean_ctor_set(x_13, 1, x_8);
lean_ctor_set(x_13, 2, x_9);
lean_ctor_set(x_13, 3, x_10);
lean_ctor_set(x_13, 4, x_11);
lean_ctor_set_uint32(x_13, sizeof(void*)*5, x_6);
lean_ctor_set_uint8(x_13, sizeof(void*)*5 + 4, x_12);
lean_ctor_set(x_1, 4, x_13);
return x_1;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint32_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_14 = lean_ctor_get(x_1, 4);
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
x_17 = lean_ctor_get(x_1, 2);
x_18 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_1);
x_19 = lean_ctor_get_uint32(x_14, sizeof(void*)*5);
x_20 = lean_ctor_get(x_14, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_14, 2);
lean_inc(x_22);
x_23 = lean_ctor_get(x_14, 3);
lean_inc(x_23);
x_24 = lean_ctor_get(x_14, 4);
lean_inc(x_24);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 lean_ctor_release(x_14, 2);
 lean_ctor_release(x_14, 3);
 lean_ctor_release(x_14, 4);
 x_25 = x_14;
} else {
 lean_dec_ref(x_14);
 x_25 = lean_box(0);
}
x_26 = 1;
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(0, 5, 5);
} else {
 x_27 = x_25;
}
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_27, 1, x_21);
lean_ctor_set(x_27, 2, x_22);
lean_ctor_set(x_27, 3, x_23);
lean_ctor_set(x_27, 4, x_24);
lean_ctor_set_uint32(x_27, sizeof(void*)*5, x_19);
lean_ctor_set_uint8(x_27, sizeof(void*)*5 + 4, x_26);
x_28 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_28, 0, x_15);
lean_ctor_set(x_28, 1, x_16);
lean_ctor_set(x_28, 2, x_17);
lean_ctor_set(x_28, 3, x_18);
lean_ctor_set(x_28, 4, x_27);
return x_28;
}
}
}
LEAN_EXPORT uint8_t lean_environment_quot_init(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_ctor_get(x_1, 4);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_ctor_get_uint8(x_2, sizeof(void*)*5 + 4);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_Environment_isQuotInit___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_environment_quot_init(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint32_t lean_environment_trust_level(lean_object* x_1) {
_start:
{
lean_object* x_2; uint32_t x_3; 
x_2 = lean_ctor_get(x_1, 4);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_ctor_get_uint32(x_2, sizeof(void*)*5);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_Environment_getTrustLevel___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = lean_environment_trust_level(x_1);
x_3 = lean_box_uint32(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_getModuleIdxFor_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint64_t x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 1);
x_5 = lean_array_get_size(x_4);
x_6 = l_Lean_Name_hash___override(x_2);
x_7 = 32;
x_8 = lean_uint64_shift_right(x_6, x_7);
x_9 = lean_uint64_xor(x_6, x_8);
x_10 = 16;
x_11 = lean_uint64_shift_right(x_9, x_10);
x_12 = lean_uint64_xor(x_9, x_11);
x_13 = lean_uint64_to_usize(x_12);
x_14 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_15 = 1;
x_16 = lean_usize_sub(x_14, x_15);
x_17 = lean_usize_land(x_13, x_16);
x_18 = lean_array_uget(x_4, x_17);
x_19 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_getModuleIdxFor_x3f___spec__1(x_2, x_18);
lean_dec(x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_getModuleIdxFor_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_getModuleIdxFor_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getModuleIdxFor_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Environment_getModuleIdxFor_x3f(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_Environment_isConstructor(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_environment_find(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 6)
{
uint8_t x_6; 
lean_dec(x_5);
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_isConstructor___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Environment_isConstructor(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Lean_Environment_isSafeDefinition(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_environment_find(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get_uint8(x_6, sizeof(void*)*4);
lean_dec(x_6);
x_8 = lean_box(x_7);
if (lean_obj_tag(x_8) == 1)
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_8);
x_10 = 0;
return x_10;
}
}
else
{
uint8_t x_11; 
lean_dec(x_5);
x_11 = 0;
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_isSafeDefinition___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Environment_isSafeDefinition(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Lean_Environment_getModuleIdx_x3f___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_name_eq(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getModuleIdx_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 4);
x_4 = lean_ctor_get(x_3, 3);
x_5 = lean_alloc_closure((void*)(l_Lean_Environment_getModuleIdx_x3f___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_findIdx_x3f_loop___rarg(x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getModuleIdx_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Environment_getModuleIdx_x3f___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getModuleIdx_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Environment_getModuleIdx_x3f(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_addDeclCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; lean_object* x_6; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_add_decl(x_1, x_5, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_addDeclWithoutChecking___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_add_decl_without_checking(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_instantiateTypeLevelParams(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_ConstantInfo_type(x_1);
x_4 = l_Lean_ConstantInfo_levelParams(x_1);
x_5 = l_Lean_Expr_instantiateLevelParams(x_3, x_4, x_2);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_instantiateTypeLevelParams___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_ConstantInfo_instantiateTypeLevelParams(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_instantiateValueLevelParams_x21(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_ConstantInfo_value_x21(x_1);
x_4 = l_Lean_ConstantInfo_levelParams(x_1);
x_5 = l_Lean_Expr_instantiateLevelParams(x_3, x_4, x_2);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_instantiateValueLevelParams_x21___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_ConstantInfo_instantiateValueLevelParams_x21(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnvExtensionInterface___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnvExtensionInterface___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnvExtensionInterface___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_3);
return x_3;
}
}
static lean_object* _init_l_Lean_instInhabitedEnvExtensionInterface___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_EnvironmentHeader_imports___default___closed__1;
x_2 = lean_alloc_closure((void*)(l_EStateM_pure___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_instInhabitedEnvExtensionInterface___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_instInhabitedEnvExtensionInterface___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_instInhabitedEnvExtensionInterface___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_instInhabitedEnvExtensionInterface___lambda__2), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_instInhabitedEnvExtensionInterface___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_instInhabitedEnvExtensionInterface___lambda__3___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_instInhabitedEnvExtensionInterface___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_EStateM_pure___rarg), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_instInhabitedEnvExtensionInterface___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_instInhabitedEnvExtensionInterface___closed__2;
x_2 = l_Lean_instInhabitedEnvExtensionInterface___closed__3;
x_3 = l_Lean_instInhabitedEnvExtensionInterface___closed__4;
x_4 = l_Lean_instInhabitedEnvExtensionInterface___closed__1;
x_5 = l_Lean_instInhabitedEnvExtensionInterface___closed__5;
x_6 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_3);
lean_ctor_set(x_6, 4, x_3);
lean_ctor_set(x_6, 5, x_4);
lean_ctor_set(x_6, 6, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_instInhabitedEnvExtensionInterface() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_instInhabitedEnvExtensionInterface___closed__6;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnvExtensionInterface___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_instInhabitedEnvExtensionInterface___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnvExtensionInterface___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_instInhabitedEnvExtensionInterface___lambda__3(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
static uint32_t _init_l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1___closed__1() {
_start:
{
lean_object* x_1; uint32_t x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_uint32_of_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1___closed__2() {
_start:
{
lean_object* x_1; uint32_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1___closed__1;
x_3 = l_Lean_instToStringImport___closed__2;
x_4 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint32(x_4, sizeof(void*)*2, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__2;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_initFn____x40_Lean_Environment___hyg_1444_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_EnvironmentHeader_imports___default___closed__1;
x_3 = lean_st_mk_ref(x_2, x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_ensureExtensionsArraySize_loop___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_envExtensionsRef;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_ensureExtensionsArraySize_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = l_Lean_EnvExtensionInterfaceUnsafe_ensureExtensionsArraySize_loop___closed__1;
x_5 = lean_st_ref_get(x_4, x_3);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_array_get_size(x_7);
x_10 = lean_nat_dec_lt(x_1, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_dec(x_7);
lean_dec(x_1);
lean_ctor_set(x_5, 0, x_2);
return x_5;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_free_object(x_5);
x_11 = lean_array_fget(x_7, x_1);
lean_dec(x_7);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_apply_1(x_12, x_8);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_push(x_2, x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_1, x_17);
lean_dec(x_1);
x_1 = x_18;
x_2 = x_16;
x_3 = x_15;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_2);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_13);
if (x_20 == 0)
{
return x_13;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_13, 0);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_13);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_5, 0);
x_25 = lean_ctor_get(x_5, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_5);
x_26 = lean_array_get_size(x_24);
x_27 = lean_nat_dec_lt(x_1, x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_24);
lean_dec(x_1);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_array_fget(x_24, x_1);
lean_dec(x_24);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_apply_1(x_30, x_25);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_array_push(x_2, x_32);
x_35 = lean_unsigned_to_nat(1u);
x_36 = lean_nat_add(x_1, x_35);
lean_dec(x_1);
x_1 = x_36;
x_2 = x_34;
x_3 = x_33;
goto _start;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_2);
lean_dec(x_1);
x_38 = lean_ctor_get(x_31, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_31, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_40 = x_31;
} else {
 lean_dec_ref(x_31);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(1, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_ensureExtensionsArraySize(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_array_get_size(x_1);
x_4 = l_Lean_EnvExtensionInterfaceUnsafe_ensureExtensionsArraySize_loop(x_3, x_1, x_2);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_invalidExtMsg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("invalid environment extension has been accessed", 47, 47);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_invalidExtMsg() {
_start:
{
lean_object* x_1; 
x_1 = l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_invalidExtMsg___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_EnvExtensionInterfaceUnsafe_setState___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_panic_fn(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Environment", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.EnvExtensionInterfaceUnsafe.setState", 41, 41);
return x_1;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__1;
x_2 = l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__2;
x_3 = lean_unsigned_to_nat(334u);
x_4 = lean_unsigned_to_nat(4u);
x_5 = l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_invalidExtMsg;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_4, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_7 = l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__3;
x_8 = l_panic___at_Lean_EnvExtensionInterfaceUnsafe_setState___spec__1(x_2, x_7);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = lean_array_fset(x_2, x_4, x_3);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_setState(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_EnvExtensionInterfaceUnsafe_modifyState___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_panic_fn(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.EnvExtensionInterfaceUnsafe.modifyState", 44, 44);
return x_1;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__1;
x_2 = l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg___closed__1;
x_3 = lean_unsigned_to_nat(344u);
x_4 = lean_unsigned_to_nat(4u);
x_5 = l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_invalidExtMsg;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_4, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_7 = l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg___closed__2;
x_8 = l_panic___at_Lean_EnvExtensionInterfaceUnsafe_modifyState___spec__1(x_2, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_4);
x_10 = lean_box(0);
x_11 = lean_array_fset(x_2, x_4, x_10);
x_12 = lean_apply_1(x_3, x_9);
x_13 = lean_array_fset(x_11, x_4, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_modifyState(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.EnvExtensionInterfaceUnsafe.getState", 41, 41);
return x_1;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__1;
x_2 = l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg___closed__1;
x_3 = lean_unsigned_to_nat(351u);
x_4 = lean_unsigned_to_nat(4u);
x_5 = l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_invalidExtMsg;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_lt(x_4, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg___closed__2;
x_8 = l_panic___rarg(x_1, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_array_fget(x_3, x_4);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_getState(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = l_Lean_EnvExtensionInterfaceUnsafe_ensureExtensionsArraySize_loop___closed__1;
x_5 = lean_st_ref_get(x_4, x_3);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_array_get_size(x_7);
lean_dec(x_7);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 0, x_9);
x_10 = lean_st_ref_take(x_4, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_5);
x_13 = lean_array_push(x_11, x_5);
x_14 = lean_st_ref_set(x_4, x_13, x_12);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
lean_ctor_set(x_14, 0, x_5);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_5);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_19 = lean_ctor_get(x_5, 0);
x_20 = lean_ctor_get(x_5, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_5);
x_21 = lean_array_get_size(x_19);
lean_dec(x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_1);
x_23 = lean_st_ref_take(x_4, x_20);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_22);
x_26 = lean_array_push(x_24, x_22);
x_27 = lean_st_ref_set(x_4, x_26, x_25);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_29 = x_27;
} else {
 lean_dec_ref(x_27);
 x_29 = lean_box(0);
}
if (lean_is_scalar(x_29)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_29;
}
lean_ctor_set(x_30, 0, x_22);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("failed to register environment, extensions can only be registered during initialization", 87, 87);
return x_1;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___closed__1;
x_2 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_initializing(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_3, 0);
lean_dec(x_7);
x_8 = l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___closed__2;
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___closed__2;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_box(0);
x_14 = l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___lambda__1(x_1, x_13, x_12);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_registerExt(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_EnvExtensionInterfaceUnsafe_mkInitialExtStates___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_lt(x_2, x_1);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_array_uget(x_3, x_2);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_3, x_2, x_8);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_apply_1(x_10, x_4);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = 1;
x_15 = lean_usize_add(x_2, x_14);
x_16 = lean_array_uset(x_9, x_2, x_12);
x_2 = x_15;
x_3 = x_16;
x_4 = x_13;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_9);
x_18 = !lean_is_exclusive(x_11);
if (x_18 == 0)
{
return x_11;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_11);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_mkInitialExtStates(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; 
x_2 = l_Lean_EnvExtensionInterfaceUnsafe_ensureExtensionsArraySize_loop___closed__1;
x_3 = lean_st_ref_get(x_2, x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_array_size(x_4);
x_7 = 0;
x_8 = l_Array_mapMUnsafe_map___at_Lean_EnvExtensionInterfaceUnsafe_mkInitialExtStates___spec__1(x_6, x_7, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_EnvExtensionInterfaceUnsafe_mkInitialExtStates___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = l_Array_mapMUnsafe_map___at_Lean_EnvExtensionInterfaceUnsafe_mkInitialExtStates___spec__1(x_5, x_6, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_panic_fn(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_4, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_7 = l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg___closed__2;
x_8 = lean_panic_fn(x_2, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_4);
x_10 = lean_box(0);
x_11 = lean_array_fset(x_2, x_4, x_10);
x_12 = lean_apply_1(x_3, x_9);
x_13 = lean_array_fset(x_11, x_4, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__3___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__4___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__2;
return x_3;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__5___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__4), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__3), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_EnvExtensionInterfaceUnsafe_mkInitialExtStates), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_EnvExtensionInterfaceUnsafe_ensureExtensionsArraySize), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__1;
x_2 = l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__2;
x_3 = l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__3;
x_4 = l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__4;
x_5 = l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__5;
x_6 = l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__6;
x_7 = l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__7;
x_8 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
lean_ctor_set(x_8, 3, x_4);
lean_ctor_set(x_8, 4, x_5);
lean_ctor_set(x_8, 5, x_6);
lean_ctor_set(x_8, 6, x_7);
return x_8;
}
}
static lean_object* _init_l_Lean_EnvExtensionInterfaceUnsafe_imp() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__8;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__3___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__5(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_ensureExtensionsArraySize(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = lean_ctor_get(x_1, 4);
x_9 = l_Lean_EnvExtensionInterfaceUnsafe_ensureExtensionsArraySize(x_6, x_2);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_9, 0);
lean_ctor_set(x_1, 2, x_11);
lean_ctor_set(x_9, 0, x_1);
return x_9;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_9);
lean_ctor_set(x_1, 2, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
lean_free_object(x_1);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_1, 0);
x_20 = lean_ctor_get(x_1, 1);
x_21 = lean_ctor_get(x_1, 2);
x_22 = lean_ctor_get(x_1, 3);
x_23 = lean_ctor_get(x_1, 4);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_1);
x_24 = l_Lean_EnvExtensionInterfaceUnsafe_ensureExtensionsArraySize(x_21, x_2);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_27 = x_24;
} else {
 lean_dec_ref(x_24);
 x_27 = lean_box(0);
}
x_28 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_28, 0, x_19);
lean_ctor_set(x_28, 1, x_20);
lean_ctor_set(x_28, 2, x_25);
lean_ctor_set(x_28, 3, x_22);
lean_ctor_set(x_28, 4, x_23);
if (lean_is_scalar(x_27)) {
 x_29 = lean_alloc_ctor(0, 2, 0);
} else {
 x_29 = x_27;
}
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_26);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_19);
x_30 = lean_ctor_get(x_24, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_24, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_32 = x_24;
} else {
 lean_dec_ref(x_24);
 x_32 = lean_box(0);
}
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(1, 2, 0);
} else {
 x_33 = x_32;
}
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtension_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__2;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtension_instInhabited___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_EnvExtension_instInhabited(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtension_setState___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 2);
x_6 = l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg(x_1, x_5, x_3);
lean_ctor_set(x_2, 2, x_6);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_2, 2);
x_10 = lean_ctor_get(x_2, 3);
x_11 = lean_ctor_get(x_2, 4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_2);
x_12 = l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg(x_1, x_9, x_3);
x_13 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_13, 0, x_7);
lean_ctor_set(x_13, 1, x_8);
lean_ctor_set(x_13, 2, x_12);
lean_ctor_set(x_13, 3, x_10);
lean_ctor_set(x_13, 4, x_11);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtension_setState(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_EnvExtension_setState___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtension_setState___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_EnvExtension_setState___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtension_modifyState___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 2);
x_6 = l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2___rarg(x_1, x_5, x_3);
lean_ctor_set(x_2, 2, x_6);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_2, 2);
x_10 = lean_ctor_get(x_2, 3);
x_11 = lean_ctor_get(x_2, 4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_2);
x_12 = l_Lean_EnvExtensionInterfaceUnsafe_imp___elambda__2___rarg(x_1, x_9, x_3);
x_13 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_13, 0, x_7);
lean_ctor_set(x_13, 1, x_8);
lean_ctor_set(x_13, 2, x_12);
lean_ctor_set(x_13, 3, x_10);
lean_ctor_set(x_13, 4, x_11);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtension_modifyState(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_EnvExtension_modifyState___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtension_modifyState___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_EnvExtension_modifyState___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtension_getState___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_3, 2);
x_5 = l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtension_getState(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_EnvExtension_getState___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_EnvExtension_getState___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_EnvExtension_getState___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnvExtension___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnvExtension(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_registerEnvExtension___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_mkInitialExtensionStates(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_EnvExtensionInterfaceUnsafe_mkInitialExtStates(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_mkEmptyEnvironment___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Nat_nextPowerOfTwo_go(x_1, x_2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_Lean_mkEmptyEnvironment___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_mkEmptyEnvironment___lambda__1___closed__1;
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_mkEmptyEnvironment___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_mkEmptyEnvironment___lambda__1___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_mkEmptyEnvironment___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_mkEmptyEnvironment___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_mkEmptyEnvironment___lambda__1___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_mkEmptyEnvironment___lambda__1___closed__6() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_Lean_mkEmptyEnvironment___lambda__1___closed__3;
x_3 = l_Lean_mkEmptyEnvironment___lambda__1___closed__5;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_mkEmptyEnvironment___lambda__1(uint32_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_EnvExtensionInterfaceUnsafe_mkInitialExtStates(x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = 0;
x_8 = lean_box(0);
x_9 = l_Lean_EnvironmentHeader_imports___default___closed__1;
x_10 = lean_alloc_ctor(0, 5, 5);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
lean_ctor_set(x_10, 2, x_9);
lean_ctor_set(x_10, 3, x_9);
lean_ctor_set(x_10, 4, x_9);
lean_ctor_set_uint32(x_10, sizeof(void*)*5, x_1);
lean_ctor_set_uint8(x_10, sizeof(void*)*5 + 4, x_7);
x_11 = l_Lean_mkEmptyEnvironment___lambda__1___closed__3;
x_12 = l_Lean_mkEmptyEnvironment___lambda__1___closed__6;
x_13 = l_Lean_NameSet_empty;
x_14 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_12);
lean_ctor_set(x_14, 2, x_6);
lean_ctor_set(x_14, 3, x_13);
lean_ctor_set(x_14, 4, x_10);
lean_ctor_set(x_4, 0, x_14);
return x_4;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_ctor_get(x_4, 0);
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_4);
x_17 = 0;
x_18 = lean_box(0);
x_19 = l_Lean_EnvironmentHeader_imports___default___closed__1;
x_20 = lean_alloc_ctor(0, 5, 5);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_20, 2, x_19);
lean_ctor_set(x_20, 3, x_19);
lean_ctor_set(x_20, 4, x_19);
lean_ctor_set_uint32(x_20, sizeof(void*)*5, x_1);
lean_ctor_set_uint8(x_20, sizeof(void*)*5 + 4, x_17);
x_21 = l_Lean_mkEmptyEnvironment___lambda__1___closed__3;
x_22 = l_Lean_mkEmptyEnvironment___lambda__1___closed__6;
x_23 = l_Lean_NameSet_empty;
x_24 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_22);
lean_ctor_set(x_24, 2, x_15);
lean_ctor_set(x_24, 3, x_23);
lean_ctor_set(x_24, 4, x_20);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_16);
return x_25;
}
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_4);
if (x_26 == 0)
{
return x_4;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_4, 0);
x_28 = lean_ctor_get(x_4, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_4);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
static lean_object* _init_l_Lean_mkEmptyEnvironment___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("environment objects cannot be created during initialization", 59, 59);
return x_1;
}
}
static lean_object* _init_l_Lean_mkEmptyEnvironment___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_mkEmptyEnvironment___closed__1;
x_2 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lean_mk_empty_environment(uint32_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_io_initializing(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = l_Lean_mkEmptyEnvironment___lambda__1(x_1, x_7, x_6);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_3);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_dec(x_10);
x_11 = l_Lean_mkEmptyEnvironment___closed__2;
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_11);
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = l_Lean_mkEmptyEnvironment___closed__2;
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkEmptyEnvironment___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; 
x_4 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_5 = l_Lean_mkEmptyEnvironment___lambda__1(x_4, x_2, x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_mkEmptyEnvironment___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_mk_empty_environment(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtensionState___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_EnvironmentHeader_imports___default___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtensionState(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_instInhabitedPersistentEnvExtensionState___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1___closed__2;
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_EnvironmentHeader_imports___default___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l_Lean_instInhabitedPersistentEnvExtension___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_instInhabitedPersistentEnvExtension___lambda__1___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_instInhabitedPersistentEnvExtension___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_instInhabitedPersistentEnvExtension___lambda__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_instInhabitedPersistentEnvExtension___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_instInhabitedPersistentEnvExtension___lambda__3___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_instInhabitedPersistentEnvExtension___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_instInhabitedPersistentEnvExtension___lambda__4___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_instInhabitedPersistentEnvExtension___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__2;
x_2 = lean_box(0);
x_3 = l_Lean_instInhabitedPersistentEnvExtension___closed__1;
x_4 = l_Lean_instInhabitedPersistentEnvExtension___closed__2;
x_5 = l_Lean_instInhabitedPersistentEnvExtension___closed__3;
x_6 = l_Lean_instInhabitedPersistentEnvExtension___closed__4;
x_7 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_4);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set(x_7, 5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_instInhabitedPersistentEnvExtension___closed__5;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_instInhabitedPersistentEnvExtension___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_instInhabitedPersistentEnvExtension___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_instInhabitedPersistentEnvExtension___lambda__3(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__4___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_instInhabitedPersistentEnvExtension___lambda__4(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentEnvExtension___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_instInhabitedPersistentEnvExtension(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_instInhabitedPersistentEnvExtensionState___rarg(x_1);
x_6 = lean_ctor_get(x_2, 0);
x_7 = l_Lean_EnvExtension_getState___rarg(x_5, x_6, x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_instInhabitedModuleData___closed__1;
x_10 = lean_array_get(x_9, x_8, x_4);
lean_dec(x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_getModuleEntries(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_PersistentEnvExtension_getModuleEntries___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_PersistentEnvExtension_getModuleEntries___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_dec(x_1);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_apply_2(x_4, x_6, x_2);
lean_ctor_set(x_3, 1, x_7);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_3);
x_10 = lean_apply_2(x_4, x_9, x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_Lean_PersistentEnvExtension_addEntry___rarg___lambda__1), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
x_6 = l_Lean_EnvExtension_modifyState___rarg(x_4, x_2, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_addEntry(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_PersistentEnvExtension_addEntry___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_getState___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Lean_instInhabitedPersistentEnvExtensionState___rarg(x_1);
x_5 = lean_ctor_get(x_2, 0);
x_6 = l_Lean_EnvExtension_getState___rarg(x_4, x_5, x_3);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_getState(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_PersistentEnvExtension_getState___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_getState___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PersistentEnvExtension_getState___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_setState___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 1);
lean_dec(x_4);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_1);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_setState___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_alloc_closure((void*)(l_Lean_PersistentEnvExtension_setState___rarg___lambda__1), 2, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = l_Lean_EnvExtension_modifyState___rarg(x_4, x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_setState(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_PersistentEnvExtension_setState___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_setState___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PersistentEnvExtension_setState___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_modifyState___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_apply_1(x_1, x_4);
lean_ctor_set(x_2, 1, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_2);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_modifyState___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_alloc_closure((void*)(l_Lean_PersistentEnvExtension_modifyState___rarg___lambda__1), 2, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = l_Lean_EnvExtension_modifyState___rarg(x_4, x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_modifyState(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_PersistentEnvExtension_modifyState___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtension_modifyState___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PersistentEnvExtension_modifyState___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_2563_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_EnvironmentHeader_imports___default___closed__1;
x_3 = lean_st_mk_ref(x_2, x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSeq", 9, 9);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___auto____x40_Lean_Environment___hyg_2608____closed__1;
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__2;
x_3 = l___auto____x40_Lean_Environment___hyg_2608____closed__3;
x_4 = l___auto____x40_Lean_Environment___hyg_2608____closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___auto____x40_Lean_Environment___hyg_2608____closed__1;
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__2;
x_3 = l___auto____x40_Lean_Environment___hyg_2608____closed__3;
x_4 = l___auto____x40_Lean_Environment___hyg_2608____closed__6;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__8;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("exact", 5, 5);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___auto____x40_Lean_Environment___hyg_2608____closed__1;
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__2;
x_3 = l___auto____x40_Lean_Environment___hyg_2608____closed__3;
x_4 = l___auto____x40_Lean_Environment___hyg_2608____closed__10;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__10;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_instInhabitedModuleData___closed__1;
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__12;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("declName", 8, 8);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___auto____x40_Lean_Environment___hyg_2608____closed__1;
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__2;
x_3 = l___auto____x40_Lean_Environment___hyg_2608____closed__14;
x_4 = l___auto____x40_Lean_Environment___hyg_2608____closed__15;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("decl_name%", 10, 10);
return x_1;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__17;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_instInhabitedModuleData___closed__1;
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__18;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__16;
x_3 = l___auto____x40_Lean_Environment___hyg_2608____closed__19;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Lean_Environment___hyg_2608____closed__13;
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__20;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__11;
x_3 = l___auto____x40_Lean_Environment___hyg_2608____closed__21;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_instInhabitedModuleData___closed__1;
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__22;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__9;
x_3 = l___auto____x40_Lean_Environment___hyg_2608____closed__23;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_instInhabitedModuleData___closed__1;
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__24;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__7;
x_3 = l___auto____x40_Lean_Environment___hyg_2608____closed__25;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_instInhabitedModuleData___closed__1;
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__26;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608____closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l___auto____x40_Lean_Environment___hyg_2608____closed__5;
x_3 = l___auto____x40_Lean_Environment___hyg_2608____closed__27;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2608_() {
_start:
{
lean_object* x_1; 
x_1 = l___auto____x40_Lean_Environment___hyg_2608____closed__28;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtensionDescr_statsFn___default(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentEnvExtensionDescr_statsFn___default___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_PersistentEnvExtensionDescr_statsFn___default(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_name_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
size_t x_10; size_t x_11; 
x_10 = 1;
x_11 = lean_usize_add(x_3, x_10);
x_3 = x_11;
goto _start;
}
else
{
uint8_t x_13; 
x_13 = 1;
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Array_anyMUnsafe_any___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_EnvironmentHeader_imports___default___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
static lean_object* _init_l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_persistentEnvExtensionsRef;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
x_8 = lean_ctor_get(x_1, 3);
x_9 = lean_ctor_get(x_1, 4);
x_10 = lean_ctor_get(x_1, 5);
x_11 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__1;
x_12 = lean_alloc_closure((void*)(l_EStateM_bind___rarg), 3, 2);
lean_closure_set(x_12, 0, x_6);
lean_closure_set(x_12, 1, x_11);
x_13 = l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg(x_12, x_3);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_ctor_set(x_1, 1, x_5);
lean_ctor_set(x_1, 0, x_14);
x_16 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__2;
x_17 = lean_st_ref_take(x_16, x_15);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_1);
x_20 = lean_array_push(x_18, x_1);
x_21 = lean_st_ref_set(x_16, x_20, x_19);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set(x_21, 0, x_1);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_free_object(x_1);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_26 = !lean_is_exclusive(x_13);
if (x_26 == 0)
{
return x_13;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_13, 0);
x_28 = lean_ctor_get(x_13, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_13);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_30 = lean_ctor_get(x_1, 0);
x_31 = lean_ctor_get(x_1, 1);
x_32 = lean_ctor_get(x_1, 2);
x_33 = lean_ctor_get(x_1, 3);
x_34 = lean_ctor_get(x_1, 4);
x_35 = lean_ctor_get(x_1, 5);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_1);
x_36 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__1;
x_37 = lean_alloc_closure((void*)(l_EStateM_bind___rarg), 3, 2);
lean_closure_set(x_37, 0, x_31);
lean_closure_set(x_37, 1, x_36);
x_38 = l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg(x_37, x_3);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_30);
lean_ctor_set(x_41, 2, x_32);
lean_ctor_set(x_41, 3, x_33);
lean_ctor_set(x_41, 4, x_34);
lean_ctor_set(x_41, 5, x_35);
x_42 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__2;
x_43 = lean_st_ref_take(x_42, x_40);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
lean_inc(x_41);
x_46 = lean_array_push(x_44, x_41);
x_47 = lean_st_ref_set(x_42, x_46, x_45);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_49 = x_47;
} else {
 lean_dec_ref(x_47);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_41);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_30);
x_51 = lean_ctor_get(x_38, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_38, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_53 = x_38;
} else {
 lean_dec_ref(x_38);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(1, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
}
}
static lean_object* _init_l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("invalid environment extension, '", 32, 32);
return x_1;
}
}
static lean_object* _init_l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("' has already been used", 23, 23);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__2;
x_4 = lean_st_ref_get(x_3, x_2);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_array_get_size(x_6);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_free_object(x_4);
lean_dec(x_6);
x_11 = lean_box(0);
x_12 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_11, x_7);
return x_12;
}
else
{
size_t x_13; size_t x_14; uint8_t x_15; 
x_13 = 0;
x_14 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_15 = l_Array_anyMUnsafe_any___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___rarg(x_1, x_6, x_13, x_14);
lean_dec(x_6);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_free_object(x_4);
x_16 = lean_box(0);
x_17 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_16, x_7);
return x_17;
}
else
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = 1;
x_20 = l_Lean_instToStringImport___closed__1;
x_21 = l_Lean_Name_toString(x_18, x_19, x_20);
x_22 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_23 = lean_string_append(x_22, x_21);
lean_dec(x_21);
x_24 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
x_25 = lean_string_append(x_23, x_24);
x_26 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_26);
return x_4;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_4, 0);
x_28 = lean_ctor_get(x_4, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_4);
x_29 = lean_array_get_size(x_27);
x_30 = lean_unsigned_to_nat(0u);
x_31 = lean_nat_dec_lt(x_30, x_29);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_29);
lean_dec(x_27);
x_32 = lean_box(0);
x_33 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_32, x_28);
return x_33;
}
else
{
size_t x_34; size_t x_35; uint8_t x_36; 
x_34 = 0;
x_35 = lean_usize_of_nat(x_29);
lean_dec(x_29);
x_36 = l_Array_anyMUnsafe_any___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___rarg(x_1, x_27, x_34, x_35);
lean_dec(x_27);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_box(0);
x_38 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_37, x_28);
return x_38;
}
else
{
lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_39 = lean_ctor_get(x_1, 0);
lean_inc(x_39);
lean_dec(x_1);
x_40 = 1;
x_41 = l_Lean_instToStringImport___closed__1;
x_42 = l_Lean_Name_toString(x_39, x_40, x_41);
x_43 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_44 = lean_string_append(x_43, x_42);
lean_dec(x_42);
x_45 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
x_46 = lean_string_append(x_44, x_45);
x_47 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_28);
return x_48;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerPersistentEnvExtensionUnsafe(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_registerPersistentEnvExtensionUnsafe___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___rarg(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_registerPersistentEnvExtensionUnsafe(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_4, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_10 = l_Id_instMonad;
x_11 = l_Array_foldlMUnsafe_fold___rarg(x_10, x_1, x_3, x_8, x_9, x_2);
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_alloc_closure((void*)(l_Lean_mkStateFromImportedEntries___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_array_get_size(x_3);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_2;
}
else
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_5, x_5);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_2;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_11 = l_Id_instMonad;
x_12 = l_Array_foldlMUnsafe_fold___rarg(x_11, x_4, x_3, x_9, x_10, x_2);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_mkStateFromImportedEntries___rarg), 3, 0);
return x_3;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_2986_() {
_start:
{
lean_object* x_1; 
x_1 = l___auto____x40_Lean_Environment___hyg_2608____closed__28;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtensionDescr_toArrayFn___default___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtensionDescr_toArrayFn___default(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_SimplePersistentEnvExtensionDescr_toArrayFn___default___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_apply_1(x_1, x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_8, x_6, x_3);
lean_ctor_set(x_2, 1, x_9);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
lean_inc(x_3);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_10);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_2(x_13, x_11, x_3);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_List_reverse___rarg(x_4);
x_6 = lean_apply_1(x_3, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("number of local entries: ", 25, 25);
return x_1;
}
}
static lean_object* _init_l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_lengthTRAux___rarg(x_2, x_3);
x_5 = l___private_Init_Data_Repr_0__Nat_reprFast(x_4);
x_6 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___closed__2;
x_8 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_registerSimplePersistentEnvExtension___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_box(0);
x_6 = l_Lean_EnvironmentHeader_imports___default___closed__1;
lean_inc(x_4);
x_7 = lean_apply_1(x_4, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_closure((void*)(l_EStateM_pure___rarg), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__1___boxed), 5, 2);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__2), 3, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__3), 2, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = l_Lean_registerSimplePersistentEnvExtension___rarg___closed__1;
x_14 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_14, 0, x_3);
lean_ctor_set(x_14, 1, x_9);
lean_ctor_set(x_14, 2, x_10);
lean_ctor_set(x_14, 3, x_11);
lean_ctor_set(x_14, 4, x_12);
lean_ctor_set(x_14, 5, x_13);
x_15 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg(x_14, x_2);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_registerSimplePersistentEnvExtension(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
x_4 = l_Lean_instInhabitedPersistentEnvExtension(lean_box(0), lean_box(0), lean_box(0), x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_SimplePersistentEnvExtension_instInhabited___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getEntries___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
x_6 = l_Lean_PersistentEnvExtension_getState___rarg(x_5, x_2, x_3);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getEntries(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_SimplePersistentEnvExtension_getEntries___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getEntries___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getState___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
x_6 = l_Lean_PersistentEnvExtension_getState___rarg(x_5, x_2, x_3);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getState(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_SimplePersistentEnvExtension_getState___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getState___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_setState___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 1);
lean_dec(x_4);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_1);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_setState___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Lean_SimplePersistentEnvExtension_setState___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_Lean_PersistentEnvExtension_modifyState___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_setState(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_SimplePersistentEnvExtension_setState___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_setState___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_SimplePersistentEnvExtension_setState___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_modifyState___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_apply_1(x_1, x_4);
lean_ctor_set(x_2, 1, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_2);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_modifyState___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Lean_SimplePersistentEnvExtension_modifyState___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_Lean_PersistentEnvExtension_modifyState___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_modifyState(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_SimplePersistentEnvExtension_modifyState___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_modifyState___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_SimplePersistentEnvExtension_modifyState___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_3303_() {
_start:
{
lean_object* x_1; 
x_1 = l___auto____x40_Lean_Environment___hyg_2608____closed__28;
return x_1;
}
}
static lean_object* _init_l_Array_qsort_sort___at_Lean_mkTagDeclarationExtension___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Name_quickLt___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_mkTagDeclarationExtension___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_lt(x_2, x_3);
if (x_4 == 0)
{
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = l_Array_qsort_sort___at_Lean_mkTagDeclarationExtension___spec__1___closed__1;
lean_inc(x_2);
x_6 = l_Array_qpartition___rarg(x_1, x_5, x_2, x_3);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_nat_dec_le(x_3, x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Array_qsort_sort___at_Lean_mkTagDeclarationExtension___spec__1(x_8, x_2, x_7);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_7, x_11);
lean_dec(x_7);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
else
{
lean_dec(x_7);
lean_dec(x_2);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_Lean_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_NameSet_empty;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___lambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_array_mk(x_1);
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_3, x_4);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_qsort_sort___at_Lean_mkTagDeclarationExtension___spec__1(x_2, x_6, x_5);
lean_dec(x_5);
return x_7;
}
}
static lean_object* _init_l_Lean_mkTagDeclarationExtension___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_mkTagDeclarationExtension___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_mkTagDeclarationExtension___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_mkTagDeclarationExtension___lambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_mkTagDeclarationExtension___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_mkTagDeclarationExtension___lambda__3), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Lean_mkTagDeclarationExtension___closed__1;
x_4 = l_Lean_mkTagDeclarationExtension___closed__2;
x_5 = l_Lean_mkTagDeclarationExtension___closed__3;
x_6 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_4);
lean_ctor_set(x_6, 3, x_5);
x_7 = l_Lean_registerSimplePersistentEnvExtension___rarg(x_6, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_mkTagDeclarationExtension___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_qsort_sort___at_Lean_mkTagDeclarationExtension___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkTagDeclarationExtension___lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_TagDeclarationExtension_instInhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_NameSet_instInhabited;
x_2 = l_Lean_SimplePersistentEnvExtension_instInhabited___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_TagDeclarationExtension_instInhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_TagDeclarationExtension_instInhabited___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_TagDeclarationExtension_tag___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_panic_fn(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_TagDeclarationExtension_tag___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("assertion violation: ", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Lean_TagDeclarationExtension_tag___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("env.getModuleIdxFor\? declName |>.isNone -- See comment at `TagDeclarationExtension`\n  ", 86, 86);
return x_1;
}
}
static lean_object* _init_l_Lean_TagDeclarationExtension_tag___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_TagDeclarationExtension_tag___closed__1;
x_2 = l_Lean_TagDeclarationExtension_tag___closed__2;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_TagDeclarationExtension_tag___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.TagDeclarationExtension.tag", 32, 32);
return x_1;
}
}
static lean_object* _init_l_Lean_TagDeclarationExtension_tag___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__1;
x_2 = l_Lean_TagDeclarationExtension_tag___closed__4;
x_3 = lean_unsigned_to_nat(628u);
x_4 = lean_unsigned_to_nat(2u);
x_5 = l_Lean_TagDeclarationExtension_tag___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_tag(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Environment_getModuleIdxFor_x3f(x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_1, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_6 = l_Lean_TagDeclarationExtension_tag___closed__5;
x_7 = l_panic___at_Lean_TagDeclarationExtension_tag___spec__1(x_2, x_6);
return x_7;
}
}
}
LEAN_EXPORT uint8_t l_Array_binSearchAux___at_Lean_TagDeclarationExtension_isTagged___spec__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_le(x_4, x_5);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_nat_add(x_4, x_5);
x_9 = lean_unsigned_to_nat(2u);
x_10 = lean_nat_div(x_8, x_9);
lean_dec(x_8);
lean_inc(x_3);
x_11 = lean_array_get(x_3, x_2, x_10);
x_12 = l_Lean_Name_quickLt(x_11, x_3);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_5);
x_13 = l_Lean_Name_quickLt(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
x_14 = 1;
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_10, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_10, x_17);
lean_dec(x_10);
x_5 = x_18;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
x_20 = 0;
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_11);
lean_dec(x_4);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_10, x_21);
lean_dec(x_10);
x_4 = x_22;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_TagDeclarationExtension_isTagged___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_NameSet_instInhabited;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_TagDeclarationExtension_isTagged(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Environment_getModuleIdxFor_x3f(x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = l_Lean_NameSet_instInhabited;
x_6 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_5, x_1, x_2);
x_7 = l_Lean_NameSet_contains(x_6, x_3);
lean_dec(x_3);
lean_dec(x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = l_Lean_TagDeclarationExtension_isTagged___closed__1;
x_10 = l_Lean_PersistentEnvExtension_getModuleEntries___rarg(x_9, x_1, x_2, x_8);
lean_dec(x_8);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_11, x_12);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_lt(x_14, x_11);
lean_dec(x_11);
if (x_15 == 0)
{
uint8_t x_16; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_3);
x_16 = 0;
return x_16;
}
else
{
uint8_t x_17; uint8_t x_18; 
x_17 = l_instInhabitedBool;
x_18 = l_Array_binSearchAux___at_Lean_TagDeclarationExtension_isTagged___spec__1(x_17, x_10, x_3, x_14, x_13);
lean_dec(x_10);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at_Lean_TagDeclarationExtension_isTagged___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; uint8_t x_7; lean_object* x_8; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_Array_binSearchAux___at_Lean_TagDeclarationExtension_isTagged___spec__1(x_6, x_2, x_3, x_4, x_5);
lean_dec(x_2);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_isTagged___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Lean_TagDeclarationExtension_isTagged(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
static lean_object* _init_l___auto____x40_Lean_Environment___hyg_3459_() {
_start:
{
lean_object* x_1; 
x_1 = l___auto____x40_Lean_Environment___hyg_2608____closed__28;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Lean_Name_quickLt(x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_lt(x_2, x_3);
if (x_4 == 0)
{
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___closed__1;
lean_inc(x_2);
x_6 = l_Array_qpartition___rarg(x_1, x_5, x_2, x_3);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_nat_dec_le(x_3, x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg(x_8, x_2, x_7);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_7, x_11);
lean_dec(x_7);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
else
{
lean_dec(x_7);
lean_dec(x_2);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Lean_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_1, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___rarg___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___rarg___lambda__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_array_mk(x_1);
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_3, x_4);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg(x_2, x_6, x_5);
lean_dec(x_5);
return x_7;
}
}
static lean_object* _init_l_Lean_mkMapDeclarationExtension___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_mkMapDeclarationExtension___rarg___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_mkMapDeclarationExtension___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_mkMapDeclarationExtension___rarg___lambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_mkMapDeclarationExtension___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_mkMapDeclarationExtension___rarg___lambda__3), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Lean_mkMapDeclarationExtension___rarg___closed__1;
x_4 = l_Lean_mkMapDeclarationExtension___rarg___closed__2;
x_5 = l_Lean_mkMapDeclarationExtension___rarg___closed__3;
x_6 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_4);
lean_ctor_set(x_6, 3, x_5);
x_7 = l_Lean_registerSimplePersistentEnvExtension___rarg(x_6, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_mkMapDeclarationExtension___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___rarg___lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkMapDeclarationExtension___rarg___lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_MapDeclarationExtension_instInhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_Lean_SimplePersistentEnvExtension_instInhabited___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_MapDeclarationExtension_instInhabited___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_MapDeclarationExtension_insert___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_panic_fn(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_MapDeclarationExtension_insert___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("env.getModuleIdxFor\? declName |>.isNone -- See comment at `MapDeclarationExtension`\n  ", 86, 86);
return x_1;
}
}
static lean_object* _init_l_Lean_MapDeclarationExtension_insert___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_TagDeclarationExtension_tag___closed__1;
x_2 = l_Lean_MapDeclarationExtension_insert___rarg___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_MapDeclarationExtension_insert___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.MapDeclarationExtension.insert", 35, 35);
return x_1;
}
}
static lean_object* _init_l_Lean_MapDeclarationExtension_insert___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__1;
x_2 = l_Lean_MapDeclarationExtension_insert___rarg___closed__3;
x_3 = lean_unsigned_to_nat(658u);
x_4 = lean_unsigned_to_nat(2u);
x_5 = l_Lean_MapDeclarationExtension_insert___rarg___closed__2;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_insert___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Environment_getModuleIdxFor_x3f(x_2, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_1, x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_8 = l_Lean_MapDeclarationExtension_insert___rarg___closed__4;
x_9 = l_panic___at_Lean_MapDeclarationExtension_insert___spec__1(x_2, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_insert(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_MapDeclarationExtension_insert___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at_Lean_MapDeclarationExtension_find_x3f___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_le(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_8 = lean_nat_add(x_4, x_5);
x_9 = lean_unsigned_to_nat(2u);
x_10 = lean_nat_div(x_8, x_9);
lean_dec(x_8);
lean_inc(x_3);
x_11 = lean_array_get(x_3, x_2, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
x_14 = l_Lean_Name_quickLt(x_12, x_13);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_5);
x_15 = l_Lean_Name_quickLt(x_13, x_12);
lean_dec(x_12);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_11);
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_11);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_nat_dec_eq(x_10, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_10, x_19);
lean_dec(x_10);
x_5 = x_20;
goto _start;
}
else
{
lean_object* x_22; 
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
x_22 = lean_box(0);
return x_22;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_4);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_10, x_23);
lean_dec(x_10);
x_4 = x_24;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at_Lean_MapDeclarationExtension_find_x3f___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_MapDeclarationExtension_find_x3f___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_MapDeclarationExtension_find_x3f___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_find_x3f___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Environment_getModuleIdxFor_x3f(x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_6, x_2, x_3);
x_8 = l_Lean_RBNode_find___at_Lean_NameMap_find_x3f___spec__1___rarg(x_7, x_4);
lean_dec(x_4);
lean_dec(x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec(x_5);
x_10 = l_Lean_MapDeclarationExtension_find_x3f___rarg___closed__1;
x_11 = l_Lean_PersistentEnvExtension_getModuleEntries___rarg(x_10, x_2, x_3, x_9);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_1);
x_13 = lean_array_get_size(x_11);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_13, x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_nat_dec_lt(x_16, x_13);
lean_dec(x_13);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
x_18 = lean_box(0);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_box(0);
x_20 = l_Array_binSearchAux___at_Lean_MapDeclarationExtension_find_x3f___spec__1___rarg(x_19, x_11, x_12, x_16, x_15);
lean_dec(x_11);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_box(0);
return x_21;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 0);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
lean_ctor_set(x_20, 0, x_24);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_20, 0);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
return x_27;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_find_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_MapDeclarationExtension_find_x3f___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at_Lean_MapDeclarationExtension_find_x3f___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_binSearchAux___at_Lean_MapDeclarationExtension_find_x3f___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_find_x3f___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_MapDeclarationExtension_find_x3f___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Array_binSearchAux___at_Lean_MapDeclarationExtension_contains___spec__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_le(x_4, x_5);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_8 = lean_nat_add(x_4, x_5);
x_9 = lean_unsigned_to_nat(2u);
x_10 = lean_nat_div(x_8, x_9);
lean_dec(x_8);
lean_inc(x_3);
x_11 = lean_array_get(x_3, x_2, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
x_14 = l_Lean_Name_quickLt(x_12, x_13);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_5);
x_15 = l_Lean_Name_quickLt(x_13, x_12);
lean_dec(x_12);
lean_dec(x_13);
if (x_15 == 0)
{
uint8_t x_16; 
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
x_16 = 1;
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_nat_dec_eq(x_10, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_10, x_19);
lean_dec(x_10);
x_5 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
x_22 = 0;
return x_22;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_4);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_10, x_23);
lean_dec(x_10);
x_4 = x_24;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at_Lean_MapDeclarationExtension_contains___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_binSearchAux___at_Lean_MapDeclarationExtension_contains___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Lean_MapDeclarationExtension_contains___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Environment_getModuleIdxFor_x3f(x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_6, x_2, x_3);
x_8 = l_Lean_NameMap_contains___rarg(x_7, x_4);
lean_dec(x_4);
lean_dec(x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec(x_5);
x_10 = l_Lean_MapDeclarationExtension_find_x3f___rarg___closed__1;
x_11 = l_Lean_PersistentEnvExtension_getModuleEntries___rarg(x_10, x_2, x_3, x_9);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_1);
x_13 = lean_array_get_size(x_11);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_13, x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_nat_dec_lt(x_16, x_13);
lean_dec(x_13);
if (x_17 == 0)
{
uint8_t x_18; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
x_18 = 0;
return x_18;
}
else
{
uint8_t x_19; uint8_t x_20; 
x_19 = l_instInhabitedBool;
x_20 = l_Array_binSearchAux___at_Lean_MapDeclarationExtension_contains___spec__1___rarg(x_19, x_11, x_12, x_16, x_15);
lean_dec(x_11);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_contains(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_MapDeclarationExtension_contains___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at_Lean_MapDeclarationExtension_contains___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; uint8_t x_7; lean_object* x_8; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_Array_binSearchAux___at_Lean_MapDeclarationExtension_contains___spec__1___rarg(x_6, x_2, x_3, x_4, x_5);
lean_dec(x_2);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_contains___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Lean_MapDeclarationExtension_contains___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_saveModuleData___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_save_module_data(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_readModuleData___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_read_module_data(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_freeRegions___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_2, x_3);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; lean_object* x_9; 
lean_dec(x_4);
x_7 = lean_array_uget(x_1, x_2);
x_8 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_9 = lean_compacted_region_free(x_8, x_5);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = 1;
x_13 = lean_usize_add(x_2, x_12);
x_2 = x_13;
x_4 = x_10;
x_5 = x_11;
goto _start;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; 
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_4);
lean_ctor_set(x_19, 1, x_5);
return x_19;
}
}
}
LEAN_EXPORT lean_object* lean_environment_free_regions(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 4);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 2);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_2);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = lean_nat_dec_le(x_5, x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
return x_12;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_13 = 0;
x_14 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_15 = lean_box(0);
x_16 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_freeRegions___spec__1(x_4, x_13, x_14, x_15, x_2);
lean_dec(x_4);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_freeRegions___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_freeRegions___spec__1(x_1, x_6, x_7, x_4, x_5);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_mkModuleData___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_lt(x_3, x_2);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; 
x_6 = lean_array_uget(x_4, x_3);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_4, x_3, x_7);
x_9 = l_Lean_instInhabitedEnvExtensionState;
x_10 = l_Lean_PersistentEnvExtension_getState___rarg(x_9, x_6, x_1);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 4);
lean_inc(x_12);
lean_dec(x_6);
x_13 = lean_apply_1(x_12, x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
x_15 = 1;
x_16 = lean_usize_add(x_3, x_15);
x_17 = lean_array_uset(x_8, x_3, x_14);
x_3 = x_16;
x_4 = x_17;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_mkModuleData___spec__4___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = 1;
x_9 = lean_usize_add(x_3, x_8);
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
lean_inc(x_1);
x_12 = lean_apply_3(x_1, x_5, x_10, x_11);
x_3 = x_9;
x_5 = x_12;
goto _start;
}
case 1:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_7, 0);
lean_inc(x_14);
lean_dec(x_7);
lean_inc(x_1);
x_15 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_mkModuleData___spec__3___rarg(x_1, x_14, x_5);
lean_dec(x_14);
x_3 = x_9;
x_5 = x_15;
goto _start;
}
default: 
{
x_3 = x_9;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_mkModuleData___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_mkModuleData___spec__4___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_mkModuleData___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_11 = lean_apply_3(x_1, x_6, x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_13;
x_6 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_mkModuleData___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_mkModuleData___spec__5___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_mkModuleData___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_5, x_5);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_mkModuleData___spec__4___rarg(x_1, x_4, x_9, x_10, x_3);
return x_11;
}
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_mkModuleData___spec__5___rarg(x_1, x_12, x_13, lean_box(0), x_14, x_3);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_mkModuleData___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldlMAux___at_Lean_mkModuleData___spec__3___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_mkModuleData___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_mkModuleData___spec__3___rarg(x_2, x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_mkModuleData___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_mkModuleData___spec__3___rarg(x_2, x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_fold___at_Lean_mkModuleData___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 3);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Lean_RBNode_fold___at_Lean_mkModuleData___spec__8(x_1, x_3);
x_7 = lean_array_push(x_6, x_4);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_RBTree_toArray___at_Lean_mkModuleData___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_EnvironmentHeader_imports___default___closed__1;
x_3 = l_Lean_RBNode_fold___at_Lean_mkModuleData___spec__8(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_mkModuleData___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_array_push(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_mkModuleData___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_array_push(x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_mkModuleData___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_mkModuleData___lambda__1___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_mkModuleData___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_mkModuleData___lambda__2___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_mkModuleData(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__2;
x_4 = lean_st_ref_get(x_3, x_2);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_array_size(x_6);
x_8 = 0;
x_9 = l_Array_mapMUnsafe_map___at_Lean_mkModuleData___spec__1(x_1, x_7, x_8, x_6);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_mkModuleData___closed__1;
x_13 = l_Lean_EnvironmentHeader_imports___default___closed__1;
x_14 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_mkModuleData___spec__3___rarg(x_12, x_11, x_13);
x_15 = l_Lean_mkModuleData___closed__2;
x_16 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_mkModuleData___spec__3___rarg(x_15, x_11, x_13);
lean_dec(x_11);
x_17 = lean_ctor_get(x_1, 4);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_ctor_get(x_1, 3);
lean_inc(x_19);
lean_dec(x_1);
x_20 = l_Lean_RBTree_toArray___at_Lean_mkModuleData___spec__7(x_19);
x_21 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_16);
lean_ctor_set(x_21, 3, x_20);
lean_ctor_set(x_21, 4, x_9);
lean_ctor_set(x_4, 0, x_21);
return x_4;
}
else
{
lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_22 = lean_ctor_get(x_4, 0);
x_23 = lean_ctor_get(x_4, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_4);
x_24 = lean_array_size(x_22);
x_25 = 0;
x_26 = l_Array_mapMUnsafe_map___at_Lean_mkModuleData___spec__1(x_1, x_24, x_25, x_22);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_Lean_mkModuleData___closed__1;
x_30 = l_Lean_EnvironmentHeader_imports___default___closed__1;
x_31 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_mkModuleData___spec__3___rarg(x_29, x_28, x_30);
x_32 = l_Lean_mkModuleData___closed__2;
x_33 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_mkModuleData___spec__3___rarg(x_32, x_28, x_30);
lean_dec(x_28);
x_34 = lean_ctor_get(x_1, 4);
lean_inc(x_34);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_ctor_get(x_1, 3);
lean_inc(x_36);
lean_dec(x_1);
x_37 = l_Lean_RBTree_toArray___at_Lean_mkModuleData___spec__7(x_36);
x_38 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_31);
lean_ctor_set(x_38, 2, x_33);
lean_ctor_set(x_38, 3, x_37);
lean_ctor_set(x_38, 4, x_26);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_23);
return x_39;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_mkModuleData___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_mkModuleData___spec__1(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_mkModuleData___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_mkModuleData___spec__4___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_mkModuleData___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_mkModuleData___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_mkModuleData___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_mkModuleData___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_mkModuleData___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PersistentHashMap_foldlM___at_Lean_mkModuleData___spec__2(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_mkModuleData___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PersistentHashMap_foldlM___at_Lean_mkModuleData___spec__6(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_mkModuleData___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_mkModuleData___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_mkModuleData___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_mkModuleData___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lean_write_module(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_4 = l_Lean_mkModuleData(x_1, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_environment_main_module(x_1);
x_8 = lean_save_module_data(x_2, x_7, x_5, x_6);
lean_dec(x_5);
lean_dec(x_7);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_mkExtNameMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_mkExtNameMap___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash___override(x_4);
x_8 = 32;
x_9 = lean_uint64_shift_right(x_7, x_8);
x_10 = lean_uint64_xor(x_7, x_9);
x_11 = 16;
x_12 = lean_uint64_shift_right(x_10, x_11);
x_13 = lean_uint64_xor(x_10, x_12);
x_14 = lean_uint64_to_usize(x_13);
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 1;
x_17 = lean_usize_sub(x_15, x_16);
x_18 = lean_usize_land(x_14, x_17);
x_19 = lean_array_uget(x_1, x_18);
lean_ctor_set(x_2, 2, x_19);
x_20 = lean_array_uset(x_1, x_18, x_2);
x_1 = x_20;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_25 = lean_array_get_size(x_1);
x_26 = l_Lean_Name_hash___override(x_22);
x_27 = 32;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = 16;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = lean_uint64_to_usize(x_32);
x_34 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_35 = 1;
x_36 = lean_usize_sub(x_34, x_35);
x_37 = lean_usize_land(x_33, x_36);
x_38 = lean_array_uget(x_1, x_37);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_23);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_array_uset(x_1, x_37, x_39);
x_1 = x_40;
x_2 = x_24;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_mkExtNameMap___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_mkExtNameMap___spec__4(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_mkExtNameMap___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_mk_array(x_4, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_mkExtNameMap___spec__3(x_7, x_1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_mkExtNameMap___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_mkExtNameMap___spec__5(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_mkExtNameMap___spec__5(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_mkExtNameMap___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_nat_dec_lt(x_9, x_6);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_8, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_8, x_17);
lean_dec(x_8);
x_19 = lean_array_fget(x_1, x_9);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = !lean_is_exclusive(x_11);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint64_t x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; size_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; lean_object* x_37; uint8_t x_38; 
x_22 = lean_ctor_get(x_11, 0);
x_23 = lean_ctor_get(x_11, 1);
x_24 = lean_array_get_size(x_23);
x_25 = l_Lean_Name_hash___override(x_20);
x_26 = 32;
x_27 = lean_uint64_shift_right(x_25, x_26);
x_28 = lean_uint64_xor(x_25, x_27);
x_29 = 16;
x_30 = lean_uint64_shift_right(x_28, x_29);
x_31 = lean_uint64_xor(x_28, x_30);
x_32 = lean_uint64_to_usize(x_31);
x_33 = lean_usize_of_nat(x_24);
lean_dec(x_24);
x_34 = 1;
x_35 = lean_usize_sub(x_33, x_34);
x_36 = lean_usize_land(x_32, x_35);
x_37 = lean_array_uget(x_23, x_36);
x_38 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_mkExtNameMap___spec__1(x_20, x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_39 = lean_nat_add(x_22, x_17);
lean_dec(x_22);
lean_inc(x_9);
x_40 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_40, 0, x_20);
lean_ctor_set(x_40, 1, x_9);
lean_ctor_set(x_40, 2, x_37);
x_41 = lean_array_uset(x_23, x_36, x_40);
x_42 = lean_unsigned_to_nat(4u);
x_43 = lean_nat_mul(x_39, x_42);
x_44 = lean_unsigned_to_nat(3u);
x_45 = lean_nat_div(x_43, x_44);
lean_dec(x_43);
x_46 = lean_array_get_size(x_41);
x_47 = lean_nat_dec_le(x_45, x_46);
lean_dec(x_46);
lean_dec(x_45);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_mkExtNameMap___spec__2(x_41);
lean_ctor_set(x_11, 1, x_48);
lean_ctor_set(x_11, 0, x_39);
x_49 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_18;
x_9 = x_49;
x_10 = lean_box(0);
goto _start;
}
else
{
lean_object* x_51; 
lean_ctor_set(x_11, 1, x_41);
lean_ctor_set(x_11, 0, x_39);
x_51 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_18;
x_9 = x_51;
x_10 = lean_box(0);
goto _start;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_inc(x_2);
x_53 = lean_array_uset(x_23, x_36, x_2);
lean_inc(x_9);
x_54 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_mkExtNameMap___spec__5(x_20, x_9, x_37);
x_55 = lean_array_uset(x_53, x_36, x_54);
lean_ctor_set(x_11, 1, x_55);
x_56 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_18;
x_9 = x_56;
x_10 = lean_box(0);
goto _start;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; uint64_t x_61; uint64_t x_62; uint64_t x_63; uint64_t x_64; uint64_t x_65; uint64_t x_66; uint64_t x_67; size_t x_68; size_t x_69; size_t x_70; size_t x_71; size_t x_72; lean_object* x_73; uint8_t x_74; 
x_58 = lean_ctor_get(x_11, 0);
x_59 = lean_ctor_get(x_11, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_11);
x_60 = lean_array_get_size(x_59);
x_61 = l_Lean_Name_hash___override(x_20);
x_62 = 32;
x_63 = lean_uint64_shift_right(x_61, x_62);
x_64 = lean_uint64_xor(x_61, x_63);
x_65 = 16;
x_66 = lean_uint64_shift_right(x_64, x_65);
x_67 = lean_uint64_xor(x_64, x_66);
x_68 = lean_uint64_to_usize(x_67);
x_69 = lean_usize_of_nat(x_60);
lean_dec(x_60);
x_70 = 1;
x_71 = lean_usize_sub(x_69, x_70);
x_72 = lean_usize_land(x_68, x_71);
x_73 = lean_array_uget(x_59, x_72);
x_74 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_mkExtNameMap___spec__1(x_20, x_73);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_75 = lean_nat_add(x_58, x_17);
lean_dec(x_58);
lean_inc(x_9);
x_76 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_76, 0, x_20);
lean_ctor_set(x_76, 1, x_9);
lean_ctor_set(x_76, 2, x_73);
x_77 = lean_array_uset(x_59, x_72, x_76);
x_78 = lean_unsigned_to_nat(4u);
x_79 = lean_nat_mul(x_75, x_78);
x_80 = lean_unsigned_to_nat(3u);
x_81 = lean_nat_div(x_79, x_80);
lean_dec(x_79);
x_82 = lean_array_get_size(x_77);
x_83 = lean_nat_dec_le(x_81, x_82);
lean_dec(x_82);
lean_dec(x_81);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_mkExtNameMap___spec__2(x_77);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_75);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_18;
x_9 = x_86;
x_10 = lean_box(0);
x_11 = x_85;
goto _start;
}
else
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_75);
lean_ctor_set(x_88, 1, x_77);
x_89 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_18;
x_9 = x_89;
x_10 = lean_box(0);
x_11 = x_88;
goto _start;
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_inc(x_2);
x_91 = lean_array_uset(x_59, x_72, x_2);
lean_inc(x_9);
x_92 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_mkExtNameMap___spec__5(x_20, x_9, x_73);
x_93 = lean_array_uset(x_91, x_72, x_92);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_58);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_18;
x_9 = x_95;
x_10 = lean_box(0);
x_11 = x_94;
goto _start;
}
}
}
else
{
lean_object* x_97; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_11);
lean_ctor_set(x_97, 1, x_12);
return x_97;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkExtNameMap(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_3 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__2;
x_4 = lean_st_ref_get(x_3, x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_box(0);
x_8 = lean_array_get_size(x_5);
x_9 = lean_unsigned_to_nat(1u);
lean_inc(x_8);
lean_inc(x_1);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
x_11 = l_Lean_mkEmptyEnvironment___lambda__1___closed__3;
lean_inc(x_1);
lean_inc(x_8);
x_12 = l_Std_Range_forIn_x27_loop___at_Lean_mkExtNameMap___spec__6(x_5, x_7, x_8, x_10, x_1, x_8, x_9, x_8, x_1, lean_box(0), x_11, x_6);
lean_dec(x_1);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_5);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_mkExtNameMap___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_mkExtNameMap___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_mkExtNameMap___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Std_Range_forIn_x27_loop___at_Lean_mkExtNameMap___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__1___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_array_get_size(x_1);
x_4 = l_Lean_EnvironmentHeader_imports___default___closed__1;
x_5 = lean_mk_array(x_3, x_4);
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_2, 0);
lean_dec(x_7);
lean_ctor_set(x_2, 0, x_5);
return x_2;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_4, x_3);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_array_uget(x_9, x_4);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Subarray_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__1___lambda__1___boxed), 2, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = l_Lean_EnvExtension_modifyState___rarg(x_11, x_5, x_12);
lean_dec(x_11);
x_14 = 1;
x_15 = lean_usize_add(x_4, x_14);
x_4 = x_15;
x_5 = x_13;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_array_set(x_5, x_1, x_2);
lean_ctor_set(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = lean_array_set(x_7, x_1, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_instInhabitedEnvExtensionState;
x_2 = l_Lean_instInhabitedPersistentEnvExtension(lean_box(0), lean_box(0), lean_box(0), x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_usize_dec_lt(x_6, x_5);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; size_t x_23; size_t x_24; size_t x_25; size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; 
x_11 = lean_array_uget(x_4, x_6);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_array_get_size(x_14);
x_16 = l_Lean_Name_hash___override(x_12);
x_17 = 32;
x_18 = lean_uint64_shift_right(x_16, x_17);
x_19 = lean_uint64_xor(x_16, x_18);
x_20 = 16;
x_21 = lean_uint64_shift_right(x_19, x_20);
x_22 = lean_uint64_xor(x_19, x_21);
x_23 = lean_uint64_to_usize(x_22);
x_24 = lean_usize_of_nat(x_15);
lean_dec(x_15);
x_25 = 1;
x_26 = lean_usize_sub(x_24, x_25);
x_27 = lean_usize_land(x_23, x_26);
x_28 = lean_array_uget(x_14, x_27);
x_29 = l_Std_DHashMap_Internal_AssocList_get_x3f___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__2(x_12, x_28);
lean_dec(x_28);
lean_dec(x_12);
if (lean_obj_tag(x_29) == 0)
{
size_t x_30; 
lean_dec(x_13);
x_30 = lean_usize_add(x_6, x_25);
x_6 = x_30;
goto _start;
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_29, 0);
lean_inc(x_32);
lean_dec(x_29);
x_33 = lean_array_get_size(x_1);
x_34 = lean_nat_dec_lt(x_32, x_33);
lean_dec(x_33);
lean_inc(x_3);
x_35 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3___lambda__1___boxed), 3, 2);
lean_closure_set(x_35, 0, x_3);
lean_closure_set(x_35, 1, x_13);
if (x_34 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; size_t x_40; 
lean_dec(x_32);
x_36 = l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3___closed__1;
x_37 = l_outOfBounds___rarg(x_36);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
lean_dec(x_37);
x_39 = l_Lean_EnvExtension_modifyState___rarg(x_38, x_7, x_35);
lean_dec(x_38);
x_40 = lean_usize_add(x_6, x_25);
x_6 = x_40;
x_7 = x_39;
goto _start;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; size_t x_45; 
x_42 = lean_array_fget(x_1, x_32);
lean_dec(x_32);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
lean_dec(x_42);
x_44 = l_Lean_EnvExtension_modifyState___rarg(x_43, x_7, x_35);
lean_dec(x_43);
x_45 = lean_usize_add(x_6, x_25);
x_6 = x_45;
x_7 = x_44;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_nat_dec_lt(x_10, x_7);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_9);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_nat_dec_eq(x_9, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_9, x_18);
lean_dec(x_9);
x_20 = lean_array_fget(x_1, x_10);
x_21 = lean_ctor_get(x_20, 4);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_array_size(x_21);
x_23 = 0;
lean_inc(x_10);
x_24 = l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3(x_2, x_3, x_10, x_21, x_22, x_23, x_12, x_13);
lean_dec(x_21);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_nat_add(x_10, x_8);
lean_dec(x_10);
x_9 = x_19;
x_10 = x_27;
x_11 = lean_box(0);
x_12 = x_25;
x_13 = x_26;
goto _start;
}
else
{
lean_object* x_29; 
lean_dec(x_10);
lean_dec(x_9);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_12);
lean_ctor_set(x_29, 1, x_13);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_setImportedEntries(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; lean_object* x_13; size_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_5 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__2;
x_6 = lean_st_ref_get(x_5, x_4);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_array_get_size(x_7);
lean_inc(x_3);
lean_inc(x_7);
x_10 = l_Array_toSubarray___rarg(x_7, x_3, x_9);
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
x_14 = lean_usize_of_nat(x_13);
lean_dec(x_13);
lean_inc(x_2);
x_15 = l_Subarray_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__1(x_2, x_10, x_12, x_14, x_1, x_8);
lean_dec(x_10);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_mkExtNameMap(x_3, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_array_get_size(x_2);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_unsigned_to_nat(1u);
lean_inc(x_21);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_21);
lean_ctor_set(x_24, 2, x_23);
lean_inc(x_21);
x_25 = l_Std_Range_forIn_x27_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__4(x_2, x_7, x_19, x_21, x_24, x_22, x_21, x_23, x_21, x_22, lean_box(0), x_16, x_20);
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
LEAN_EXPORT lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Subarray_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__1___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Subarray_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__1(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_get_x3f___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_11 = l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3(x_1, x_2, x_3, x_4, x_9, x_10, x_7, x_8);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Std_Range_forIn_x27_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_updateEnvAttributes___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_update_env_attributes(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_getNumBuiltinAttributes___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_get_num_attributes(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_1, x_7);
x_9 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop(x_2, x_3, x_8, x_4, x_6);
lean_dec(x_8);
return x_9;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_instInhabitedEnvExtensionState;
x_2 = l_Lean_instInhabitedPersistentEnvExtensionState___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__2;
x_7 = lean_st_ref_get(x_6, x_5);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = lean_array_get_size(x_9);
x_12 = lean_nat_dec_lt(x_3, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_free_object(x_7);
x_13 = lean_array_fget(x_9, x_3);
lean_dec(x_9);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___closed__1;
x_16 = l_Lean_EnvExtension_getState___rarg(x_15, x_14, x_4);
x_17 = lean_st_ref_get(x_6, x_10);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
x_21 = lean_array_get_size(x_19);
lean_dec(x_19);
x_22 = lean_get_num_attributes(x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_13, 2);
lean_inc(x_25);
lean_dec(x_13);
x_26 = !lean_is_exclusive(x_16);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_16, 0);
x_28 = lean_ctor_get(x_16, 1);
lean_dec(x_28);
lean_inc(x_2);
lean_inc(x_4);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 0, x_4);
lean_inc(x_27);
x_29 = lean_apply_3(x_25, x_27, x_17, x_24);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
lean_ctor_set(x_16, 1, x_30);
x_32 = l_Lean_EnvExtension_setState___rarg(x_14, x_4, x_16);
lean_dec(x_14);
x_33 = l___private_Lean_Environment_0__Lean_ensureExtensionsArraySize(x_32, x_31);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_st_ref_get(x_6, x_35);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_get_num_attributes(x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_array_get_size(x_37);
lean_dec(x_37);
x_43 = lean_nat_dec_lt(x_21, x_42);
lean_dec(x_42);
if (x_43 == 0)
{
uint8_t x_44; 
x_44 = lean_nat_dec_lt(x_23, x_40);
lean_dec(x_40);
lean_dec(x_23);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_21);
x_45 = lean_box(0);
x_46 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1(x_3, x_1, x_2, x_34, x_45, x_41);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_inc(x_1);
x_47 = l___private_Lean_Environment_0__Lean_setImportedEntries(x_34, x_1, x_21, x_41);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_update_env_attributes(x_48, x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_box(0);
x_54 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1(x_3, x_1, x_2, x_51, x_53, x_52);
return x_54;
}
else
{
uint8_t x_55; 
lean_dec(x_2);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_50);
if (x_55 == 0)
{
return x_50;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_50, 0);
x_57 = lean_ctor_get(x_50, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_50);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_40);
lean_dec(x_23);
lean_inc(x_1);
x_59 = l___private_Lean_Environment_0__Lean_setImportedEntries(x_34, x_1, x_21, x_41);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = lean_update_env_attributes(x_60, x_61);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_box(0);
x_66 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1(x_3, x_1, x_2, x_63, x_65, x_64);
return x_66;
}
else
{
uint8_t x_67; 
lean_dec(x_2);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_62);
if (x_67 == 0)
{
return x_62;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_62, 0);
x_69 = lean_ctor_get(x_62, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_62);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_37);
lean_dec(x_34);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_2);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_39);
if (x_71 == 0)
{
return x_39;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_39, 0);
x_73 = lean_ctor_get(x_39, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_39);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_2);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_33);
if (x_75 == 0)
{
return x_33;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_33, 0);
x_77 = lean_ctor_get(x_33, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_33);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_free_object(x_16);
lean_dec(x_27);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_79 = !lean_is_exclusive(x_29);
if (x_79 == 0)
{
return x_29;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_29, 0);
x_81 = lean_ctor_get(x_29, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_29);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
else
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_16, 0);
lean_inc(x_83);
lean_dec(x_16);
lean_inc(x_2);
lean_inc(x_4);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 0, x_4);
lean_inc(x_83);
x_84 = lean_apply_3(x_25, x_83, x_17, x_24);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_83);
lean_ctor_set(x_87, 1, x_85);
x_88 = l_Lean_EnvExtension_setState___rarg(x_14, x_4, x_87);
lean_dec(x_14);
x_89 = l___private_Lean_Environment_0__Lean_ensureExtensionsArraySize(x_88, x_86);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_st_ref_get(x_6, x_91);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = lean_get_num_attributes(x_94);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = lean_array_get_size(x_93);
lean_dec(x_93);
x_99 = lean_nat_dec_lt(x_21, x_98);
lean_dec(x_98);
if (x_99 == 0)
{
uint8_t x_100; 
x_100 = lean_nat_dec_lt(x_23, x_96);
lean_dec(x_96);
lean_dec(x_23);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; 
lean_dec(x_21);
x_101 = lean_box(0);
x_102 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1(x_3, x_1, x_2, x_90, x_101, x_97);
return x_102;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
lean_inc(x_1);
x_103 = l___private_Lean_Environment_0__Lean_setImportedEntries(x_90, x_1, x_21, x_97);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
x_106 = lean_update_env_attributes(x_104, x_105);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
x_109 = lean_box(0);
x_110 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1(x_3, x_1, x_2, x_107, x_109, x_108);
return x_110;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_2);
lean_dec(x_1);
x_111 = lean_ctor_get(x_106, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_106, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_113 = x_106;
} else {
 lean_dec_ref(x_106);
 x_113 = lean_box(0);
}
if (lean_is_scalar(x_113)) {
 x_114 = lean_alloc_ctor(1, 2, 0);
} else {
 x_114 = x_113;
}
lean_ctor_set(x_114, 0, x_111);
lean_ctor_set(x_114, 1, x_112);
return x_114;
}
}
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_96);
lean_dec(x_23);
lean_inc(x_1);
x_115 = l___private_Lean_Environment_0__Lean_setImportedEntries(x_90, x_1, x_21, x_97);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
x_118 = lean_update_env_attributes(x_116, x_117);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
lean_dec(x_118);
x_121 = lean_box(0);
x_122 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1(x_3, x_1, x_2, x_119, x_121, x_120);
return x_122;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_2);
lean_dec(x_1);
x_123 = lean_ctor_get(x_118, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_118, 1);
lean_inc(x_124);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 lean_ctor_release(x_118, 1);
 x_125 = x_118;
} else {
 lean_dec_ref(x_118);
 x_125 = lean_box(0);
}
if (lean_is_scalar(x_125)) {
 x_126 = lean_alloc_ctor(1, 2, 0);
} else {
 x_126 = x_125;
}
lean_ctor_set(x_126, 0, x_123);
lean_ctor_set(x_126, 1, x_124);
return x_126;
}
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
lean_dec(x_93);
lean_dec(x_90);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_2);
lean_dec(x_1);
x_127 = lean_ctor_get(x_95, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_95, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_129 = x_95;
} else {
 lean_dec_ref(x_95);
 x_129 = lean_box(0);
}
if (lean_is_scalar(x_129)) {
 x_130 = lean_alloc_ctor(1, 2, 0);
} else {
 x_130 = x_129;
}
lean_ctor_set(x_130, 0, x_127);
lean_ctor_set(x_130, 1, x_128);
return x_130;
}
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_2);
lean_dec(x_1);
x_131 = lean_ctor_get(x_89, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_89, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_133 = x_89;
} else {
 lean_dec_ref(x_89);
 x_133 = lean_box(0);
}
if (lean_is_scalar(x_133)) {
 x_134 = lean_alloc_ctor(1, 2, 0);
} else {
 x_134 = x_133;
}
lean_ctor_set(x_134, 0, x_131);
lean_ctor_set(x_134, 1, x_132);
return x_134;
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_83);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_135 = lean_ctor_get(x_84, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_84, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_137 = x_84;
} else {
 lean_dec_ref(x_84);
 x_137 = lean_box(0);
}
if (lean_is_scalar(x_137)) {
 x_138 = lean_alloc_ctor(1, 2, 0);
} else {
 x_138 = x_137;
}
lean_ctor_set(x_138, 0, x_135);
lean_ctor_set(x_138, 1, x_136);
return x_138;
}
}
}
else
{
uint8_t x_139; 
lean_dec(x_21);
lean_free_object(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_139 = !lean_is_exclusive(x_22);
if (x_139 == 0)
{
return x_22;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_140 = lean_ctor_get(x_22, 0);
x_141 = lean_ctor_get(x_22, 1);
lean_inc(x_141);
lean_inc(x_140);
lean_dec(x_22);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_141);
return x_142;
}
}
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_143 = lean_ctor_get(x_17, 0);
x_144 = lean_ctor_get(x_17, 1);
lean_inc(x_144);
lean_inc(x_143);
lean_dec(x_17);
x_145 = lean_array_get_size(x_143);
lean_dec(x_143);
x_146 = lean_get_num_attributes(x_144);
if (lean_obj_tag(x_146) == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_146, 1);
lean_inc(x_148);
lean_dec(x_146);
x_149 = lean_ctor_get(x_13, 2);
lean_inc(x_149);
lean_dec(x_13);
x_150 = lean_ctor_get(x_16, 0);
lean_inc(x_150);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_151 = x_16;
} else {
 lean_dec_ref(x_16);
 x_151 = lean_box(0);
}
lean_inc(x_2);
lean_inc(x_4);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_4);
lean_ctor_set(x_152, 1, x_2);
lean_inc(x_150);
x_153 = lean_apply_3(x_149, x_150, x_152, x_148);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_153, 1);
lean_inc(x_155);
lean_dec(x_153);
if (lean_is_scalar(x_151)) {
 x_156 = lean_alloc_ctor(0, 2, 0);
} else {
 x_156 = x_151;
}
lean_ctor_set(x_156, 0, x_150);
lean_ctor_set(x_156, 1, x_154);
x_157 = l_Lean_EnvExtension_setState___rarg(x_14, x_4, x_156);
lean_dec(x_14);
x_158 = l___private_Lean_Environment_0__Lean_ensureExtensionsArraySize(x_157, x_155);
if (lean_obj_tag(x_158) == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_159 = lean_ctor_get(x_158, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_158, 1);
lean_inc(x_160);
lean_dec(x_158);
x_161 = lean_st_ref_get(x_6, x_160);
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_161, 1);
lean_inc(x_163);
lean_dec(x_161);
x_164 = lean_get_num_attributes(x_163);
if (lean_obj_tag(x_164) == 0)
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; 
x_165 = lean_ctor_get(x_164, 0);
lean_inc(x_165);
x_166 = lean_ctor_get(x_164, 1);
lean_inc(x_166);
lean_dec(x_164);
x_167 = lean_array_get_size(x_162);
lean_dec(x_162);
x_168 = lean_nat_dec_lt(x_145, x_167);
lean_dec(x_167);
if (x_168 == 0)
{
uint8_t x_169; 
x_169 = lean_nat_dec_lt(x_147, x_165);
lean_dec(x_165);
lean_dec(x_147);
if (x_169 == 0)
{
lean_object* x_170; lean_object* x_171; 
lean_dec(x_145);
x_170 = lean_box(0);
x_171 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1(x_3, x_1, x_2, x_159, x_170, x_166);
return x_171;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_inc(x_1);
x_172 = l___private_Lean_Environment_0__Lean_setImportedEntries(x_159, x_1, x_145, x_166);
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
lean_dec(x_172);
x_175 = lean_update_env_attributes(x_173, x_174);
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
lean_dec(x_175);
x_178 = lean_box(0);
x_179 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1(x_3, x_1, x_2, x_176, x_178, x_177);
return x_179;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
lean_dec(x_2);
lean_dec(x_1);
x_180 = lean_ctor_get(x_175, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_175, 1);
lean_inc(x_181);
if (lean_is_exclusive(x_175)) {
 lean_ctor_release(x_175, 0);
 lean_ctor_release(x_175, 1);
 x_182 = x_175;
} else {
 lean_dec_ref(x_175);
 x_182 = lean_box(0);
}
if (lean_is_scalar(x_182)) {
 x_183 = lean_alloc_ctor(1, 2, 0);
} else {
 x_183 = x_182;
}
lean_ctor_set(x_183, 0, x_180);
lean_ctor_set(x_183, 1, x_181);
return x_183;
}
}
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
lean_dec(x_165);
lean_dec(x_147);
lean_inc(x_1);
x_184 = l___private_Lean_Environment_0__Lean_setImportedEntries(x_159, x_1, x_145, x_166);
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_184, 1);
lean_inc(x_186);
lean_dec(x_184);
x_187 = lean_update_env_attributes(x_185, x_186);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
lean_dec(x_187);
x_190 = lean_box(0);
x_191 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1(x_3, x_1, x_2, x_188, x_190, x_189);
return x_191;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; 
lean_dec(x_2);
lean_dec(x_1);
x_192 = lean_ctor_get(x_187, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_187, 1);
lean_inc(x_193);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 x_194 = x_187;
} else {
 lean_dec_ref(x_187);
 x_194 = lean_box(0);
}
if (lean_is_scalar(x_194)) {
 x_195 = lean_alloc_ctor(1, 2, 0);
} else {
 x_195 = x_194;
}
lean_ctor_set(x_195, 0, x_192);
lean_ctor_set(x_195, 1, x_193);
return x_195;
}
}
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
lean_dec(x_162);
lean_dec(x_159);
lean_dec(x_147);
lean_dec(x_145);
lean_dec(x_2);
lean_dec(x_1);
x_196 = lean_ctor_get(x_164, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_164, 1);
lean_inc(x_197);
if (lean_is_exclusive(x_164)) {
 lean_ctor_release(x_164, 0);
 lean_ctor_release(x_164, 1);
 x_198 = x_164;
} else {
 lean_dec_ref(x_164);
 x_198 = lean_box(0);
}
if (lean_is_scalar(x_198)) {
 x_199 = lean_alloc_ctor(1, 2, 0);
} else {
 x_199 = x_198;
}
lean_ctor_set(x_199, 0, x_196);
lean_ctor_set(x_199, 1, x_197);
return x_199;
}
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
lean_dec(x_147);
lean_dec(x_145);
lean_dec(x_2);
lean_dec(x_1);
x_200 = lean_ctor_get(x_158, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_158, 1);
lean_inc(x_201);
if (lean_is_exclusive(x_158)) {
 lean_ctor_release(x_158, 0);
 lean_ctor_release(x_158, 1);
 x_202 = x_158;
} else {
 lean_dec_ref(x_158);
 x_202 = lean_box(0);
}
if (lean_is_scalar(x_202)) {
 x_203 = lean_alloc_ctor(1, 2, 0);
} else {
 x_203 = x_202;
}
lean_ctor_set(x_203, 0, x_200);
lean_ctor_set(x_203, 1, x_201);
return x_203;
}
}
else
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
lean_dec(x_151);
lean_dec(x_150);
lean_dec(x_147);
lean_dec(x_145);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_204 = lean_ctor_get(x_153, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_153, 1);
lean_inc(x_205);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 x_206 = x_153;
} else {
 lean_dec_ref(x_153);
 x_206 = lean_box(0);
}
if (lean_is_scalar(x_206)) {
 x_207 = lean_alloc_ctor(1, 2, 0);
} else {
 x_207 = x_206;
}
lean_ctor_set(x_207, 0, x_204);
lean_ctor_set(x_207, 1, x_205);
return x_207;
}
}
else
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
lean_dec(x_145);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_208 = lean_ctor_get(x_146, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_146, 1);
lean_inc(x_209);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 lean_ctor_release(x_146, 1);
 x_210 = x_146;
} else {
 lean_dec_ref(x_146);
 x_210 = lean_box(0);
}
if (lean_is_scalar(x_210)) {
 x_211 = lean_alloc_ctor(1, 2, 0);
} else {
 x_211 = x_210;
}
lean_ctor_set(x_211, 0, x_208);
lean_ctor_set(x_211, 1, x_209);
return x_211;
}
}
}
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; uint8_t x_215; 
x_212 = lean_ctor_get(x_7, 0);
x_213 = lean_ctor_get(x_7, 1);
lean_inc(x_213);
lean_inc(x_212);
lean_dec(x_7);
x_214 = lean_array_get_size(x_212);
x_215 = lean_nat_dec_lt(x_3, x_214);
lean_dec(x_214);
if (x_215 == 0)
{
lean_object* x_216; 
lean_dec(x_212);
lean_dec(x_2);
lean_dec(x_1);
x_216 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_216, 0, x_4);
lean_ctor_set(x_216, 1, x_213);
return x_216;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
x_217 = lean_array_fget(x_212, x_3);
lean_dec(x_212);
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___closed__1;
x_220 = l_Lean_EnvExtension_getState___rarg(x_219, x_218, x_4);
x_221 = lean_st_ref_get(x_6, x_213);
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_224 = x_221;
} else {
 lean_dec_ref(x_221);
 x_224 = lean_box(0);
}
x_225 = lean_array_get_size(x_222);
lean_dec(x_222);
x_226 = lean_get_num_attributes(x_223);
if (lean_obj_tag(x_226) == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_227 = lean_ctor_get(x_226, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_226, 1);
lean_inc(x_228);
lean_dec(x_226);
x_229 = lean_ctor_get(x_217, 2);
lean_inc(x_229);
lean_dec(x_217);
x_230 = lean_ctor_get(x_220, 0);
lean_inc(x_230);
if (lean_is_exclusive(x_220)) {
 lean_ctor_release(x_220, 0);
 lean_ctor_release(x_220, 1);
 x_231 = x_220;
} else {
 lean_dec_ref(x_220);
 x_231 = lean_box(0);
}
lean_inc(x_2);
lean_inc(x_4);
if (lean_is_scalar(x_224)) {
 x_232 = lean_alloc_ctor(0, 2, 0);
} else {
 x_232 = x_224;
}
lean_ctor_set(x_232, 0, x_4);
lean_ctor_set(x_232, 1, x_2);
lean_inc(x_230);
x_233 = lean_apply_3(x_229, x_230, x_232, x_228);
if (lean_obj_tag(x_233) == 0)
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_234 = lean_ctor_get(x_233, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_233, 1);
lean_inc(x_235);
lean_dec(x_233);
if (lean_is_scalar(x_231)) {
 x_236 = lean_alloc_ctor(0, 2, 0);
} else {
 x_236 = x_231;
}
lean_ctor_set(x_236, 0, x_230);
lean_ctor_set(x_236, 1, x_234);
x_237 = l_Lean_EnvExtension_setState___rarg(x_218, x_4, x_236);
lean_dec(x_218);
x_238 = l___private_Lean_Environment_0__Lean_ensureExtensionsArraySize(x_237, x_235);
if (lean_obj_tag(x_238) == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 1);
lean_inc(x_240);
lean_dec(x_238);
x_241 = lean_st_ref_get(x_6, x_240);
x_242 = lean_ctor_get(x_241, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_241, 1);
lean_inc(x_243);
lean_dec(x_241);
x_244 = lean_get_num_attributes(x_243);
if (lean_obj_tag(x_244) == 0)
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; uint8_t x_248; 
x_245 = lean_ctor_get(x_244, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_244, 1);
lean_inc(x_246);
lean_dec(x_244);
x_247 = lean_array_get_size(x_242);
lean_dec(x_242);
x_248 = lean_nat_dec_lt(x_225, x_247);
lean_dec(x_247);
if (x_248 == 0)
{
uint8_t x_249; 
x_249 = lean_nat_dec_lt(x_227, x_245);
lean_dec(x_245);
lean_dec(x_227);
if (x_249 == 0)
{
lean_object* x_250; lean_object* x_251; 
lean_dec(x_225);
x_250 = lean_box(0);
x_251 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1(x_3, x_1, x_2, x_239, x_250, x_246);
return x_251;
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
lean_inc(x_1);
x_252 = l___private_Lean_Environment_0__Lean_setImportedEntries(x_239, x_1, x_225, x_246);
x_253 = lean_ctor_get(x_252, 0);
lean_inc(x_253);
x_254 = lean_ctor_get(x_252, 1);
lean_inc(x_254);
lean_dec(x_252);
x_255 = lean_update_env_attributes(x_253, x_254);
if (lean_obj_tag(x_255) == 0)
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_256 = lean_ctor_get(x_255, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_255, 1);
lean_inc(x_257);
lean_dec(x_255);
x_258 = lean_box(0);
x_259 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1(x_3, x_1, x_2, x_256, x_258, x_257);
return x_259;
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
lean_dec(x_2);
lean_dec(x_1);
x_260 = lean_ctor_get(x_255, 0);
lean_inc(x_260);
x_261 = lean_ctor_get(x_255, 1);
lean_inc(x_261);
if (lean_is_exclusive(x_255)) {
 lean_ctor_release(x_255, 0);
 lean_ctor_release(x_255, 1);
 x_262 = x_255;
} else {
 lean_dec_ref(x_255);
 x_262 = lean_box(0);
}
if (lean_is_scalar(x_262)) {
 x_263 = lean_alloc_ctor(1, 2, 0);
} else {
 x_263 = x_262;
}
lean_ctor_set(x_263, 0, x_260);
lean_ctor_set(x_263, 1, x_261);
return x_263;
}
}
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; 
lean_dec(x_245);
lean_dec(x_227);
lean_inc(x_1);
x_264 = l___private_Lean_Environment_0__Lean_setImportedEntries(x_239, x_1, x_225, x_246);
x_265 = lean_ctor_get(x_264, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_264, 1);
lean_inc(x_266);
lean_dec(x_264);
x_267 = lean_update_env_attributes(x_265, x_266);
if (lean_obj_tag(x_267) == 0)
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; 
x_268 = lean_ctor_get(x_267, 0);
lean_inc(x_268);
x_269 = lean_ctor_get(x_267, 1);
lean_inc(x_269);
lean_dec(x_267);
x_270 = lean_box(0);
x_271 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1(x_3, x_1, x_2, x_268, x_270, x_269);
return x_271;
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
lean_dec(x_2);
lean_dec(x_1);
x_272 = lean_ctor_get(x_267, 0);
lean_inc(x_272);
x_273 = lean_ctor_get(x_267, 1);
lean_inc(x_273);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 lean_ctor_release(x_267, 1);
 x_274 = x_267;
} else {
 lean_dec_ref(x_267);
 x_274 = lean_box(0);
}
if (lean_is_scalar(x_274)) {
 x_275 = lean_alloc_ctor(1, 2, 0);
} else {
 x_275 = x_274;
}
lean_ctor_set(x_275, 0, x_272);
lean_ctor_set(x_275, 1, x_273);
return x_275;
}
}
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; 
lean_dec(x_242);
lean_dec(x_239);
lean_dec(x_227);
lean_dec(x_225);
lean_dec(x_2);
lean_dec(x_1);
x_276 = lean_ctor_get(x_244, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_244, 1);
lean_inc(x_277);
if (lean_is_exclusive(x_244)) {
 lean_ctor_release(x_244, 0);
 lean_ctor_release(x_244, 1);
 x_278 = x_244;
} else {
 lean_dec_ref(x_244);
 x_278 = lean_box(0);
}
if (lean_is_scalar(x_278)) {
 x_279 = lean_alloc_ctor(1, 2, 0);
} else {
 x_279 = x_278;
}
lean_ctor_set(x_279, 0, x_276);
lean_ctor_set(x_279, 1, x_277);
return x_279;
}
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
lean_dec(x_227);
lean_dec(x_225);
lean_dec(x_2);
lean_dec(x_1);
x_280 = lean_ctor_get(x_238, 0);
lean_inc(x_280);
x_281 = lean_ctor_get(x_238, 1);
lean_inc(x_281);
if (lean_is_exclusive(x_238)) {
 lean_ctor_release(x_238, 0);
 lean_ctor_release(x_238, 1);
 x_282 = x_238;
} else {
 lean_dec_ref(x_238);
 x_282 = lean_box(0);
}
if (lean_is_scalar(x_282)) {
 x_283 = lean_alloc_ctor(1, 2, 0);
} else {
 x_283 = x_282;
}
lean_ctor_set(x_283, 0, x_280);
lean_ctor_set(x_283, 1, x_281);
return x_283;
}
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; 
lean_dec(x_231);
lean_dec(x_230);
lean_dec(x_227);
lean_dec(x_225);
lean_dec(x_218);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_284 = lean_ctor_get(x_233, 0);
lean_inc(x_284);
x_285 = lean_ctor_get(x_233, 1);
lean_inc(x_285);
if (lean_is_exclusive(x_233)) {
 lean_ctor_release(x_233, 0);
 lean_ctor_release(x_233, 1);
 x_286 = x_233;
} else {
 lean_dec_ref(x_233);
 x_286 = lean_box(0);
}
if (lean_is_scalar(x_286)) {
 x_287 = lean_alloc_ctor(1, 2, 0);
} else {
 x_287 = x_286;
}
lean_ctor_set(x_287, 0, x_284);
lean_ctor_set(x_287, 1, x_285);
return x_287;
}
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; 
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_220);
lean_dec(x_218);
lean_dec(x_217);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_288 = lean_ctor_get(x_226, 0);
lean_inc(x_288);
x_289 = lean_ctor_get(x_226, 1);
lean_inc(x_289);
if (lean_is_exclusive(x_226)) {
 lean_ctor_release(x_226, 0);
 lean_ctor_release(x_226, 1);
 x_290 = x_226;
} else {
 lean_dec_ref(x_226);
 x_290 = lean_box(0);
}
if (lean_is_scalar(x_290)) {
 x_291 = lean_alloc_ctor(1, 2, 0);
} else {
 x_291 = x_290;
}
lean_ctor_set(x_291, 0, x_288);
lean_ctor_set(x_291, 1, x_289);
return x_291;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_finalizePersistentExtensions(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop(x_2, x_3, x_5, x_1, x_4);
return x_6;
}
}
static lean_object* _init_l_Lean_ImportState_moduleNameSet___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_mkEmptyEnvironment___lambda__1___closed__3;
return x_1;
}
}
static lean_object* _init_l_Lean_ImportState_moduleNames___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_EnvironmentHeader_imports___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_ImportState_moduleData___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_EnvironmentHeader_imports___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_ImportState_regions___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_EnvironmentHeader_imports___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Std.Data.DHashMap.Internal.AssocList.Basic", 42, 42);
return x_1;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Std.DHashMap.Internal.AssocList.get!", 36, 36);
return x_1;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("key is not present in hash table", 32, 32);
return x_1;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__1;
x_2 = l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__2;
x_3 = lean_unsigned_to_nat(122u);
x_4 = lean_unsigned_to_nat(11u);
x_5 = l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__4;
x_5 = l_panic___rarg(x_1, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_2);
if (x_9 == 0)
{
x_3 = x_8;
goto _start;
}
else
{
lean_dec(x_1);
lean_inc(x_7);
return x_7;
}
}
}
}
static lean_object* _init_l_Lean_throwAlreadyImported___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("import ", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_throwAlreadyImported___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" failed, environment already contains '", 39, 39);
return x_1;
}
}
static lean_object* _init_l_Lean_throwAlreadyImported___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("' from ", 7, 7);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAlreadyImported___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_nat_dec_lt(x_3, x_7);
x_9 = 1;
x_10 = l_Lean_instToStringImport___closed__1;
lean_inc(x_4);
x_11 = l_Lean_Name_toString(x_4, x_9, x_10);
if (x_8 == 0)
{
lean_object* x_88; lean_object* x_89; 
x_88 = l_Lean_instInhabitedName;
x_89 = l_outOfBounds___rarg(x_88);
x_12 = x_89;
goto block_87;
}
else
{
lean_object* x_90; 
x_90 = lean_array_fget(x_6, x_3);
x_12 = x_90;
goto block_87;
}
block_87:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_13 = l_Lean_Name_toString(x_12, x_9, x_10);
x_14 = l_Lean_throwAlreadyImported___rarg___closed__1;
x_15 = lean_string_append(x_14, x_13);
lean_dec(x_13);
x_16 = l_Lean_throwAlreadyImported___rarg___closed__2;
x_17 = lean_string_append(x_15, x_16);
x_18 = lean_string_append(x_17, x_11);
lean_dec(x_11);
x_19 = l_Lean_throwAlreadyImported___rarg___closed__3;
x_20 = lean_string_append(x_18, x_19);
x_21 = !lean_is_exclusive(x_2);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint64_t x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; size_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_22 = lean_ctor_get(x_2, 1);
x_23 = lean_ctor_get(x_2, 0);
lean_dec(x_23);
x_24 = lean_array_get_size(x_22);
x_25 = l_Lean_Name_hash___override(x_4);
x_26 = 32;
x_27 = lean_uint64_shift_right(x_25, x_26);
x_28 = lean_uint64_xor(x_25, x_27);
x_29 = 16;
x_30 = lean_uint64_shift_right(x_28, x_29);
x_31 = lean_uint64_xor(x_28, x_30);
x_32 = lean_uint64_to_usize(x_31);
x_33 = lean_usize_of_nat(x_24);
lean_dec(x_24);
x_34 = 1;
x_35 = lean_usize_sub(x_33, x_34);
x_36 = lean_usize_land(x_32, x_35);
x_37 = lean_array_uget(x_22, x_36);
lean_dec(x_22);
x_38 = l_Lean_instInhabitedModuleIdx;
x_39 = l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1(x_38, x_4, x_37);
lean_dec(x_37);
lean_dec(x_4);
x_40 = lean_nat_dec_lt(x_39, x_7);
lean_dec(x_7);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_39);
x_41 = l_Lean_instInhabitedName;
x_42 = l_outOfBounds___rarg(x_41);
x_43 = l_Lean_Name_toString(x_42, x_9, x_10);
x_44 = lean_string_append(x_20, x_43);
lean_dec(x_43);
x_45 = l_Lean_instToStringImport___closed__2;
x_46 = lean_string_append(x_44, x_45);
x_47 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_5);
lean_ctor_set(x_2, 0, x_47);
return x_2;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_48 = lean_array_fget(x_6, x_39);
lean_dec(x_39);
x_49 = l_Lean_Name_toString(x_48, x_9, x_10);
x_50 = lean_string_append(x_20, x_49);
lean_dec(x_49);
x_51 = l_Lean_instToStringImport___closed__2;
x_52 = lean_string_append(x_50, x_51);
x_53 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_5);
lean_ctor_set(x_2, 0, x_53);
return x_2;
}
}
else
{
lean_object* x_54; lean_object* x_55; uint64_t x_56; uint64_t x_57; uint64_t x_58; uint64_t x_59; uint64_t x_60; uint64_t x_61; uint64_t x_62; size_t x_63; size_t x_64; size_t x_65; size_t x_66; size_t x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_54 = lean_ctor_get(x_2, 1);
lean_inc(x_54);
lean_dec(x_2);
x_55 = lean_array_get_size(x_54);
x_56 = l_Lean_Name_hash___override(x_4);
x_57 = 32;
x_58 = lean_uint64_shift_right(x_56, x_57);
x_59 = lean_uint64_xor(x_56, x_58);
x_60 = 16;
x_61 = lean_uint64_shift_right(x_59, x_60);
x_62 = lean_uint64_xor(x_59, x_61);
x_63 = lean_uint64_to_usize(x_62);
x_64 = lean_usize_of_nat(x_55);
lean_dec(x_55);
x_65 = 1;
x_66 = lean_usize_sub(x_64, x_65);
x_67 = lean_usize_land(x_63, x_66);
x_68 = lean_array_uget(x_54, x_67);
lean_dec(x_54);
x_69 = l_Lean_instInhabitedModuleIdx;
x_70 = l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1(x_69, x_4, x_68);
lean_dec(x_68);
lean_dec(x_4);
x_71 = lean_nat_dec_lt(x_70, x_7);
lean_dec(x_7);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_70);
x_72 = l_Lean_instInhabitedName;
x_73 = l_outOfBounds___rarg(x_72);
x_74 = l_Lean_Name_toString(x_73, x_9, x_10);
x_75 = lean_string_append(x_20, x_74);
lean_dec(x_74);
x_76 = l_Lean_instToStringImport___closed__2;
x_77 = lean_string_append(x_75, x_76);
x_78 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_78, 0, x_77);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_5);
return x_79;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_80 = lean_array_fget(x_6, x_70);
lean_dec(x_70);
x_81 = l_Lean_Name_toString(x_80, x_9, x_10);
x_82 = lean_string_append(x_20, x_81);
lean_dec(x_81);
x_83 = l_Lean_instToStringImport___closed__2;
x_84 = lean_string_append(x_82, x_83);
x_85 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_85, 0, x_84);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_5);
return x_86;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAlreadyImported(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwAlreadyImported___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAlreadyImported___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_throwAlreadyImported___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportStateM_run___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_st_mk_ref(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_8 = lean_apply_2(x_1, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_st_ref_get(x_6, x_10);
lean_dec(x_6);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_11, 0);
lean_ctor_set(x_4, 1, x_13);
lean_ctor_set(x_4, 0, x_9);
lean_ctor_set(x_11, 0, x_4);
return x_11;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_11);
lean_ctor_set(x_4, 1, x_14);
lean_ctor_set(x_4, 0, x_9);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_4);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
lean_free_object(x_4);
lean_dec(x_6);
x_17 = !lean_is_exclusive(x_8);
if (x_17 == 0)
{
return x_8;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_8, 0);
x_19 = lean_ctor_get(x_8, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_8);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_4, 0);
x_22 = lean_ctor_get(x_4, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_4);
lean_inc(x_21);
x_23 = lean_apply_2(x_1, x_21, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_st_ref_get(x_21, x_25);
lean_dec(x_21);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_29 = x_26;
} else {
 lean_dec_ref(x_26);
 x_29 = lean_box(0);
}
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_27);
if (lean_is_scalar(x_29)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_29;
}
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_21);
x_32 = lean_ctor_get(x_23, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_23, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_34 = x_23;
} else {
 lean_dec_ref(x_23);
 x_34 = lean_box(0);
}
if (lean_is_scalar(x_34)) {
 x_35 = lean_alloc_ctor(1, 2, 0);
} else {
 x_35 = x_34;
}
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportStateM_run(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ImportStateM_run___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_read_module_data(x_1, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = l_Lean_importModulesCore(x_11, x_4, x_8);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_st_ref_take(x_4, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_18 = lean_ctor_get(x_15, 1);
x_19 = lean_ctor_get(x_15, 2);
x_20 = lean_ctor_get(x_15, 3);
x_21 = lean_array_push(x_18, x_2);
x_22 = lean_array_push(x_19, x_9);
x_23 = lean_array_push(x_20, x_10);
lean_ctor_set(x_15, 3, x_23);
lean_ctor_set(x_15, 2, x_22);
lean_ctor_set(x_15, 1, x_21);
x_24 = lean_st_ref_set(x_4, x_15, x_16);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
x_27 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__1___closed__1;
lean_ctor_set(x_24, 0, x_27);
return x_24;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_24, 1);
lean_inc(x_28);
lean_dec(x_24);
x_29 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__1___closed__1;
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_31 = lean_ctor_get(x_15, 0);
x_32 = lean_ctor_get(x_15, 1);
x_33 = lean_ctor_get(x_15, 2);
x_34 = lean_ctor_get(x_15, 3);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_15);
x_35 = lean_array_push(x_32, x_2);
x_36 = lean_array_push(x_33, x_9);
x_37 = lean_array_push(x_34, x_10);
x_38 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_38, 0, x_31);
lean_ctor_set(x_38, 1, x_35);
lean_ctor_set(x_38, 2, x_36);
lean_ctor_set(x_38, 3, x_37);
x_39 = lean_st_ref_set(x_4, x_38, x_16);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_41 = x_39;
} else {
 lean_dec_ref(x_39);
 x_41 = lean_box(0);
}
x_42 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__1___closed__1;
if (lean_is_scalar(x_41)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_41;
}
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_40);
return x_43;
}
}
else
{
uint8_t x_44; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
x_44 = !lean_is_exclusive(x_12);
if (x_44 == 0)
{
return x_12;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_12, 0);
x_46 = lean_ctor_get(x_12, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_12);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_2);
x_48 = !lean_is_exclusive(x_6);
if (x_48 == 0)
{
return x_6;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_6, 0);
x_50 = lean_ctor_get(x_6, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_6);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("object file '", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("' of module ", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" does not exist", 15, 15);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_st_ref_take(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
lean_inc(x_10);
x_11 = l_Lean_NameHashSet_insert(x_9, x_10);
lean_ctor_set(x_6, 0, x_11);
x_12 = lean_st_ref_set(x_3, x_6, x_7);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_findOLean(x_10, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_System_FilePath_pathExists(x_15, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_21 = lean_ctor_get(x_17, 0);
lean_dec(x_21);
x_22 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__1;
x_23 = lean_string_append(x_22, x_15);
lean_dec(x_15);
x_24 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__2;
x_25 = lean_string_append(x_23, x_24);
x_26 = 1;
x_27 = l_Lean_instToStringImport___closed__1;
x_28 = l_Lean_Name_toString(x_10, x_26, x_27);
x_29 = lean_string_append(x_25, x_28);
lean_dec(x_28);
x_30 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__3;
x_31 = lean_string_append(x_29, x_30);
x_32 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set_tag(x_17, 1);
lean_ctor_set(x_17, 0, x_32);
return x_17;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_33 = lean_ctor_get(x_17, 1);
lean_inc(x_33);
lean_dec(x_17);
x_34 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__1;
x_35 = lean_string_append(x_34, x_15);
lean_dec(x_15);
x_36 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__2;
x_37 = lean_string_append(x_35, x_36);
x_38 = 1;
x_39 = l_Lean_instToStringImport___closed__1;
x_40 = l_Lean_Name_toString(x_10, x_38, x_39);
x_41 = lean_string_append(x_37, x_40);
lean_dec(x_40);
x_42 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__3;
x_43 = lean_string_append(x_41, x_42);
x_44 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_33);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_17, 1);
lean_inc(x_46);
lean_dec(x_17);
x_47 = lean_box(0);
x_48 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__1(x_15, x_10, x_47, x_3, x_46);
lean_dec(x_15);
return x_48;
}
}
else
{
uint8_t x_49; 
lean_dec(x_10);
x_49 = !lean_is_exclusive(x_14);
if (x_49 == 0)
{
return x_14;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_14, 0);
x_51 = lean_ctor_get(x_14, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_14);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_53 = lean_ctor_get(x_6, 0);
x_54 = lean_ctor_get(x_6, 1);
x_55 = lean_ctor_get(x_6, 2);
x_56 = lean_ctor_get(x_6, 3);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_6);
x_57 = lean_ctor_get(x_1, 0);
lean_inc(x_57);
lean_dec(x_1);
lean_inc(x_57);
x_58 = l_Lean_NameHashSet_insert(x_53, x_57);
x_59 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_54);
lean_ctor_set(x_59, 2, x_55);
lean_ctor_set(x_59, 3, x_56);
x_60 = lean_st_ref_set(x_3, x_59, x_7);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_62 = l_Lean_findOLean(x_57, x_61);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = l_System_FilePath_pathExists(x_63, x_64);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_unbox(x_66);
lean_dec(x_66);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_69 = x_65;
} else {
 lean_dec_ref(x_65);
 x_69 = lean_box(0);
}
x_70 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__1;
x_71 = lean_string_append(x_70, x_63);
lean_dec(x_63);
x_72 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__2;
x_73 = lean_string_append(x_71, x_72);
x_74 = 1;
x_75 = l_Lean_instToStringImport___closed__1;
x_76 = l_Lean_Name_toString(x_57, x_74, x_75);
x_77 = lean_string_append(x_73, x_76);
lean_dec(x_76);
x_78 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__3;
x_79 = lean_string_append(x_77, x_78);
x_80 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_80, 0, x_79);
if (lean_is_scalar(x_69)) {
 x_81 = lean_alloc_ctor(1, 2, 0);
} else {
 x_81 = x_69;
 lean_ctor_set_tag(x_81, 1);
}
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_68);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_65, 1);
lean_inc(x_82);
lean_dec(x_65);
x_83 = lean_box(0);
x_84 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__1(x_63, x_57, x_83, x_3, x_82);
lean_dec(x_63);
return x_84;
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_57);
x_85 = lean_ctor_get(x_62, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_62, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_87 = x_62;
} else {
 lean_dec_ref(x_62);
 x_87 = lean_box(0);
}
if (lean_is_scalar(x_87)) {
 x_88 = lean_alloc_ctor(1, 2, 0);
} else {
 x_88 = x_87;
}
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_3, x_2);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
lean_dec(x_4);
x_9 = lean_array_uget(x_1, x_3);
x_10 = lean_st_ref_get(x_5, x_6);
x_11 = lean_ctor_get_uint8(x_9, sizeof(void*)*1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_9, 0);
lean_inc(x_15);
x_16 = l_Lean_NameHashSet_contains(x_14, x_15);
lean_dec(x_15);
lean_dec(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_box(0);
x_18 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2(x_9, x_17, x_5, x_13);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 0);
lean_dec(x_21);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
lean_dec(x_19);
lean_ctor_set(x_18, 0, x_22);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_ctor_get(x_19, 0);
lean_inc(x_24);
lean_dec(x_19);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; 
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_dec(x_18);
x_27 = lean_ctor_get(x_19, 0);
lean_inc(x_27);
lean_dec(x_19);
x_28 = 1;
x_29 = lean_usize_add(x_3, x_28);
x_3 = x_29;
x_4 = x_27;
x_6 = x_26;
goto _start;
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_18);
if (x_31 == 0)
{
return x_18;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_18, 0);
x_33 = lean_ctor_get(x_18, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_18);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
size_t x_35; size_t x_36; lean_object* x_37; 
lean_dec(x_9);
x_35 = 1;
x_36 = lean_usize_add(x_3, x_35);
x_37 = lean_box(0);
x_3 = x_36;
x_4 = x_37;
x_6 = x_13;
goto _start;
}
}
else
{
lean_object* x_39; size_t x_40; size_t x_41; lean_object* x_42; 
lean_dec(x_9);
x_39 = lean_ctor_get(x_10, 1);
lean_inc(x_39);
lean_dec(x_10);
x_40 = 1;
x_41 = lean_usize_add(x_3, x_40);
x_42 = lean_box(0);
x_3 = x_41;
x_4 = x_42;
x_6 = x_39;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_importModulesCore(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_array_size(x_1);
x_5 = 0;
x_6 = lean_box(0);
x_7 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1(x_1, x_4, x_5, x_6, x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_7, 0);
lean_dec(x_9);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_7);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_importModulesCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_importModulesCore(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Environment_0__Lean_equivInfo(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 0);
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_7, 0);
x_9 = lean_name_eq(x_6, x_8);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_5, 2);
x_12 = lean_ctor_get(x_7, 2);
x_13 = lean_expr_eqv(x_11, x_12);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_5, 1);
x_16 = lean_ctor_get(x_7, 1);
x_17 = l_List_beq___at___private_Lean_Declaration_0__Lean_beqConstantVal____x40_Lean_Declaration___hyg_433____spec__1(x_15, x_16);
if (x_17 == 0)
{
uint8_t x_18; 
x_18 = 0;
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_3, 2);
x_20 = lean_ctor_get(x_4, 2);
x_21 = l_List_beq___at___private_Lean_Declaration_0__Lean_beqConstantVal____x40_Lean_Declaration___hyg_433____spec__1(x_19, x_20);
return x_21;
}
}
}
}
else
{
uint8_t x_22; 
x_22 = 0;
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = 0;
return x_23;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_equivInfo___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Environment_0__Lean_equivInfo(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_finalizeImport___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_finalizeImport___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash___override(x_4);
x_8 = 32;
x_9 = lean_uint64_shift_right(x_7, x_8);
x_10 = lean_uint64_xor(x_7, x_9);
x_11 = 16;
x_12 = lean_uint64_shift_right(x_10, x_11);
x_13 = lean_uint64_xor(x_10, x_12);
x_14 = lean_uint64_to_usize(x_13);
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 1;
x_17 = lean_usize_sub(x_15, x_16);
x_18 = lean_usize_land(x_14, x_17);
x_19 = lean_array_uget(x_1, x_18);
lean_ctor_set(x_2, 2, x_19);
x_20 = lean_array_uset(x_1, x_18, x_2);
x_1 = x_20;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_25 = lean_array_get_size(x_1);
x_26 = l_Lean_Name_hash___override(x_22);
x_27 = 32;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = 16;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = lean_uint64_to_usize(x_32);
x_34 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_35 = 1;
x_36 = lean_usize_sub(x_34, x_35);
x_37 = lean_usize_land(x_33, x_36);
x_38 = lean_array_uget(x_1, x_37);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_23);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_array_uset(x_1, x_37, x_39);
x_1 = x_40;
x_2 = x_24;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_finalizeImport___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_finalizeImport___spec__4(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_finalizeImport___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_mk_array(x_4, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_finalizeImport___spec__3(x_7, x_1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint64_t x_12; uint64_t x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; size_t x_19; size_t x_20; size_t x_21; size_t x_22; size_t x_23; lean_object* x_24; uint8_t x_25; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
x_11 = lean_array_get_size(x_10);
x_12 = l_Lean_Name_hash___override(x_1);
x_13 = 32;
x_14 = lean_uint64_shift_right(x_12, x_13);
x_15 = lean_uint64_xor(x_12, x_14);
x_16 = 16;
x_17 = lean_uint64_shift_right(x_15, x_16);
x_18 = lean_uint64_xor(x_15, x_17);
x_19 = lean_uint64_to_usize(x_18);
x_20 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_21 = 1;
x_22 = lean_usize_sub(x_20, x_21);
x_23 = lean_usize_land(x_19, x_22);
x_24 = lean_array_uget(x_10, x_23);
x_25 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_finalizeImport___spec__1(x_1, x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_9, x_26);
lean_dec(x_9);
x_28 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_28, 0, x_1);
lean_ctor_set(x_28, 1, x_2);
lean_ctor_set(x_28, 2, x_24);
x_29 = lean_array_uset(x_10, x_23, x_28);
x_30 = lean_unsigned_to_nat(4u);
x_31 = lean_nat_mul(x_27, x_30);
x_32 = lean_unsigned_to_nat(3u);
x_33 = lean_nat_div(x_31, x_32);
lean_dec(x_31);
x_34 = lean_array_get_size(x_29);
x_35 = lean_nat_dec_le(x_33, x_34);
lean_dec(x_34);
lean_dec(x_33);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_finalizeImport___spec__2(x_29);
lean_ctor_set(x_4, 1, x_36);
lean_ctor_set(x_4, 0, x_27);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_4);
lean_ctor_set(x_37, 1, x_5);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_3);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_7);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_ctor_set(x_4, 1, x_29);
lean_ctor_set(x_4, 0, x_27);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_4);
lean_ctor_set(x_41, 1, x_5);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_3);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_7);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_1);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_4);
lean_ctor_set(x_45, 1, x_5);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_3);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_7);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; uint64_t x_52; uint64_t x_53; uint64_t x_54; uint64_t x_55; uint64_t x_56; uint64_t x_57; uint64_t x_58; size_t x_59; size_t x_60; size_t x_61; size_t x_62; size_t x_63; lean_object* x_64; uint8_t x_65; 
x_49 = lean_ctor_get(x_4, 0);
x_50 = lean_ctor_get(x_4, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_4);
x_51 = lean_array_get_size(x_50);
x_52 = l_Lean_Name_hash___override(x_1);
x_53 = 32;
x_54 = lean_uint64_shift_right(x_52, x_53);
x_55 = lean_uint64_xor(x_52, x_54);
x_56 = 16;
x_57 = lean_uint64_shift_right(x_55, x_56);
x_58 = lean_uint64_xor(x_55, x_57);
x_59 = lean_uint64_to_usize(x_58);
x_60 = lean_usize_of_nat(x_51);
lean_dec(x_51);
x_61 = 1;
x_62 = lean_usize_sub(x_60, x_61);
x_63 = lean_usize_land(x_59, x_62);
x_64 = lean_array_uget(x_50, x_63);
x_65 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_finalizeImport___spec__1(x_1, x_64);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_66 = lean_unsigned_to_nat(1u);
x_67 = lean_nat_add(x_49, x_66);
lean_dec(x_49);
x_68 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_68, 0, x_1);
lean_ctor_set(x_68, 1, x_2);
lean_ctor_set(x_68, 2, x_64);
x_69 = lean_array_uset(x_50, x_63, x_68);
x_70 = lean_unsigned_to_nat(4u);
x_71 = lean_nat_mul(x_67, x_70);
x_72 = lean_unsigned_to_nat(3u);
x_73 = lean_nat_div(x_71, x_72);
lean_dec(x_71);
x_74 = lean_array_get_size(x_69);
x_75 = lean_nat_dec_le(x_73, x_74);
lean_dec(x_74);
lean_dec(x_73);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_76 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_finalizeImport___spec__2(x_69);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_67);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_5);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_3);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_80, 0, x_79);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_7);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_67);
lean_ctor_set(x_82, 1, x_69);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_5);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_3);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_85, 0, x_84);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_7);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_64);
lean_dec(x_2);
lean_dec(x_1);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_49);
lean_ctor_set(x_87, 1, x_50);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_5);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_3);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_90, 0, x_89);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_7);
return x_91;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_lt(x_5, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_uget(x_3, x_5);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_6, 1);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_14, 2);
lean_inc(x_19);
x_20 = lean_nat_dec_lt(x_18, x_19);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_2);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_6);
lean_ctor_set(x_21, 1, x_7);
return x_21;
}
else
{
uint8_t x_22; 
lean_free_object(x_12);
lean_free_object(x_6);
x_22 = !lean_is_exclusive(x_14);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_55; 
x_23 = lean_ctor_get(x_14, 2);
lean_dec(x_23);
x_24 = lean_ctor_get(x_14, 1);
lean_dec(x_24);
x_25 = lean_ctor_get(x_14, 0);
lean_dec(x_25);
x_26 = lean_array_fget(x_17, x_18);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_18, x_27);
lean_dec(x_18);
lean_ctor_set(x_14, 1, x_28);
x_55 = !lean_is_exclusive(x_16);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; uint64_t x_59; uint64_t x_60; uint64_t x_61; uint64_t x_62; uint64_t x_63; uint64_t x_64; uint64_t x_65; size_t x_66; size_t x_67; size_t x_68; size_t x_69; size_t x_70; lean_object* x_71; lean_object* x_72; 
x_56 = lean_ctor_get(x_16, 0);
x_57 = lean_ctor_get(x_16, 1);
x_58 = lean_array_get_size(x_57);
x_59 = l_Lean_Name_hash___override(x_10);
x_60 = 32;
x_61 = lean_uint64_shift_right(x_59, x_60);
x_62 = lean_uint64_xor(x_59, x_61);
x_63 = 16;
x_64 = lean_uint64_shift_right(x_62, x_63);
x_65 = lean_uint64_xor(x_62, x_64);
x_66 = lean_uint64_to_usize(x_65);
x_67 = lean_usize_of_nat(x_58);
lean_dec(x_58);
x_68 = 1;
x_69 = lean_usize_sub(x_67, x_68);
x_70 = lean_usize_land(x_66, x_69);
x_71 = lean_array_uget(x_57, x_70);
x_72 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_find_x3f___spec__5(x_10, x_71);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_73 = lean_nat_add(x_56, x_27);
lean_dec(x_56);
lean_inc(x_26);
lean_inc(x_10);
x_74 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_74, 0, x_10);
lean_ctor_set(x_74, 1, x_26);
lean_ctor_set(x_74, 2, x_71);
x_75 = lean_array_uset(x_57, x_70, x_74);
x_76 = lean_box(0);
x_77 = lean_unsigned_to_nat(4u);
x_78 = lean_nat_mul(x_73, x_77);
x_79 = lean_unsigned_to_nat(3u);
x_80 = lean_nat_div(x_78, x_79);
lean_dec(x_78);
x_81 = lean_array_get_size(x_75);
x_82 = lean_nat_dec_le(x_80, x_81);
lean_dec(x_81);
lean_dec(x_80);
if (x_82 == 0)
{
lean_object* x_83; 
x_83 = l_Std_DHashMap_Internal_Raw_u2080_expand___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__7(x_75);
lean_ctor_set(x_16, 1, x_83);
lean_ctor_set(x_16, 0, x_73);
x_29 = x_76;
x_30 = x_16;
goto block_54;
}
else
{
lean_ctor_set(x_16, 1, x_75);
lean_ctor_set(x_16, 0, x_73);
x_29 = x_76;
x_30 = x_16;
goto block_54;
}
}
else
{
uint8_t x_84; 
lean_dec(x_71);
x_84 = !lean_is_exclusive(x_72);
if (x_84 == 0)
{
x_29 = x_72;
x_30 = x_16;
goto block_54;
}
else
{
lean_object* x_85; lean_object* x_86; 
x_85 = lean_ctor_get(x_72, 0);
lean_inc(x_85);
lean_dec(x_72);
x_86 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_86, 0, x_85);
x_29 = x_86;
x_30 = x_16;
goto block_54;
}
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; uint64_t x_90; uint64_t x_91; uint64_t x_92; uint64_t x_93; uint64_t x_94; uint64_t x_95; uint64_t x_96; size_t x_97; size_t x_98; size_t x_99; size_t x_100; size_t x_101; lean_object* x_102; lean_object* x_103; 
x_87 = lean_ctor_get(x_16, 0);
x_88 = lean_ctor_get(x_16, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_16);
x_89 = lean_array_get_size(x_88);
x_90 = l_Lean_Name_hash___override(x_10);
x_91 = 32;
x_92 = lean_uint64_shift_right(x_90, x_91);
x_93 = lean_uint64_xor(x_90, x_92);
x_94 = 16;
x_95 = lean_uint64_shift_right(x_93, x_94);
x_96 = lean_uint64_xor(x_93, x_95);
x_97 = lean_uint64_to_usize(x_96);
x_98 = lean_usize_of_nat(x_89);
lean_dec(x_89);
x_99 = 1;
x_100 = lean_usize_sub(x_98, x_99);
x_101 = lean_usize_land(x_97, x_100);
x_102 = lean_array_uget(x_88, x_101);
x_103 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_find_x3f___spec__5(x_10, x_102);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_104 = lean_nat_add(x_87, x_27);
lean_dec(x_87);
lean_inc(x_26);
lean_inc(x_10);
x_105 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_105, 0, x_10);
lean_ctor_set(x_105, 1, x_26);
lean_ctor_set(x_105, 2, x_102);
x_106 = lean_array_uset(x_88, x_101, x_105);
x_107 = lean_box(0);
x_108 = lean_unsigned_to_nat(4u);
x_109 = lean_nat_mul(x_104, x_108);
x_110 = lean_unsigned_to_nat(3u);
x_111 = lean_nat_div(x_109, x_110);
lean_dec(x_109);
x_112 = lean_array_get_size(x_106);
x_113 = lean_nat_dec_le(x_111, x_112);
lean_dec(x_112);
lean_dec(x_111);
if (x_113 == 0)
{
lean_object* x_114; lean_object* x_115; 
x_114 = l_Std_DHashMap_Internal_Raw_u2080_expand___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__7(x_106);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_104);
lean_ctor_set(x_115, 1, x_114);
x_29 = x_107;
x_30 = x_115;
goto block_54;
}
else
{
lean_object* x_116; 
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_104);
lean_ctor_set(x_116, 1, x_106);
x_29 = x_107;
x_30 = x_116;
goto block_54;
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
lean_dec(x_102);
x_117 = lean_ctor_get(x_103, 0);
lean_inc(x_117);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 x_118 = x_103;
} else {
 lean_dec_ref(x_103);
 x_118 = lean_box(0);
}
if (lean_is_scalar(x_118)) {
 x_119 = lean_alloc_ctor(1, 1, 0);
} else {
 x_119 = x_118;
}
lean_ctor_set(x_119, 0, x_117);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_87);
lean_ctor_set(x_120, 1, x_88);
x_29 = x_119;
x_30 = x_120;
goto block_54;
}
}
block_54:
{
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; 
lean_dec(x_26);
x_31 = lean_box(0);
lean_inc(x_2);
x_32 = l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5___lambda__1(x_10, x_2, x_14, x_15, x_30, x_31, x_7);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
lean_dec(x_33);
x_36 = 1;
x_37 = lean_usize_add(x_5, x_36);
x_5 = x_37;
x_6 = x_35;
x_7 = x_34;
goto _start;
}
else
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_29, 0);
lean_inc(x_39);
lean_dec(x_29);
x_40 = l___private_Lean_Environment_0__Lean_equivInfo(x_39, x_26);
lean_dec(x_26);
lean_dec(x_39);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; 
lean_dec(x_30);
lean_dec(x_14);
x_41 = l_Lean_throwAlreadyImported___rarg(x_1, x_15, x_2, x_10, x_7);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
return x_41;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_41, 0);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_41);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; size_t x_51; size_t x_52; 
x_46 = lean_box(0);
lean_inc(x_2);
x_47 = l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5___lambda__1(x_10, x_2, x_14, x_15, x_30, x_46, x_7);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_ctor_get(x_48, 0);
lean_inc(x_50);
lean_dec(x_48);
x_51 = 1;
x_52 = lean_usize_add(x_5, x_51);
x_5 = x_52;
x_6 = x_50;
x_7 = x_49;
goto _start;
}
}
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint64_t x_155; uint64_t x_156; uint64_t x_157; uint64_t x_158; uint64_t x_159; uint64_t x_160; uint64_t x_161; size_t x_162; size_t x_163; size_t x_164; size_t x_165; size_t x_166; lean_object* x_167; lean_object* x_168; 
lean_dec(x_14);
x_121 = lean_array_fget(x_17, x_18);
x_122 = lean_unsigned_to_nat(1u);
x_123 = lean_nat_add(x_18, x_122);
lean_dec(x_18);
x_124 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_124, 0, x_17);
lean_ctor_set(x_124, 1, x_123);
lean_ctor_set(x_124, 2, x_19);
x_151 = lean_ctor_get(x_16, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_16, 1);
lean_inc(x_152);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_153 = x_16;
} else {
 lean_dec_ref(x_16);
 x_153 = lean_box(0);
}
x_154 = lean_array_get_size(x_152);
x_155 = l_Lean_Name_hash___override(x_10);
x_156 = 32;
x_157 = lean_uint64_shift_right(x_155, x_156);
x_158 = lean_uint64_xor(x_155, x_157);
x_159 = 16;
x_160 = lean_uint64_shift_right(x_158, x_159);
x_161 = lean_uint64_xor(x_158, x_160);
x_162 = lean_uint64_to_usize(x_161);
x_163 = lean_usize_of_nat(x_154);
lean_dec(x_154);
x_164 = 1;
x_165 = lean_usize_sub(x_163, x_164);
x_166 = lean_usize_land(x_162, x_165);
x_167 = lean_array_uget(x_152, x_166);
x_168 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_find_x3f___spec__5(x_10, x_167);
if (lean_obj_tag(x_168) == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; uint8_t x_178; 
x_169 = lean_nat_add(x_151, x_122);
lean_dec(x_151);
lean_inc(x_121);
lean_inc(x_10);
x_170 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_170, 0, x_10);
lean_ctor_set(x_170, 1, x_121);
lean_ctor_set(x_170, 2, x_167);
x_171 = lean_array_uset(x_152, x_166, x_170);
x_172 = lean_box(0);
x_173 = lean_unsigned_to_nat(4u);
x_174 = lean_nat_mul(x_169, x_173);
x_175 = lean_unsigned_to_nat(3u);
x_176 = lean_nat_div(x_174, x_175);
lean_dec(x_174);
x_177 = lean_array_get_size(x_171);
x_178 = lean_nat_dec_le(x_176, x_177);
lean_dec(x_177);
lean_dec(x_176);
if (x_178 == 0)
{
lean_object* x_179; lean_object* x_180; 
x_179 = l_Std_DHashMap_Internal_Raw_u2080_expand___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__7(x_171);
if (lean_is_scalar(x_153)) {
 x_180 = lean_alloc_ctor(0, 2, 0);
} else {
 x_180 = x_153;
}
lean_ctor_set(x_180, 0, x_169);
lean_ctor_set(x_180, 1, x_179);
x_125 = x_172;
x_126 = x_180;
goto block_150;
}
else
{
lean_object* x_181; 
if (lean_is_scalar(x_153)) {
 x_181 = lean_alloc_ctor(0, 2, 0);
} else {
 x_181 = x_153;
}
lean_ctor_set(x_181, 0, x_169);
lean_ctor_set(x_181, 1, x_171);
x_125 = x_172;
x_126 = x_181;
goto block_150;
}
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_dec(x_167);
x_182 = lean_ctor_get(x_168, 0);
lean_inc(x_182);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 x_183 = x_168;
} else {
 lean_dec_ref(x_168);
 x_183 = lean_box(0);
}
if (lean_is_scalar(x_183)) {
 x_184 = lean_alloc_ctor(1, 1, 0);
} else {
 x_184 = x_183;
}
lean_ctor_set(x_184, 0, x_182);
if (lean_is_scalar(x_153)) {
 x_185 = lean_alloc_ctor(0, 2, 0);
} else {
 x_185 = x_153;
}
lean_ctor_set(x_185, 0, x_151);
lean_ctor_set(x_185, 1, x_152);
x_125 = x_184;
x_126 = x_185;
goto block_150;
}
block_150:
{
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; size_t x_132; size_t x_133; 
lean_dec(x_121);
x_127 = lean_box(0);
lean_inc(x_2);
x_128 = l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5___lambda__1(x_10, x_2, x_124, x_15, x_126, x_127, x_7);
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
x_131 = lean_ctor_get(x_129, 0);
lean_inc(x_131);
lean_dec(x_129);
x_132 = 1;
x_133 = lean_usize_add(x_5, x_132);
x_5 = x_133;
x_6 = x_131;
x_7 = x_130;
goto _start;
}
else
{
lean_object* x_135; uint8_t x_136; 
x_135 = lean_ctor_get(x_125, 0);
lean_inc(x_135);
lean_dec(x_125);
x_136 = l___private_Lean_Environment_0__Lean_equivInfo(x_135, x_121);
lean_dec(x_121);
lean_dec(x_135);
if (x_136 == 0)
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_126);
lean_dec(x_124);
x_137 = l_Lean_throwAlreadyImported___rarg(x_1, x_15, x_2, x_10, x_7);
lean_dec(x_2);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_137, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_140 = x_137;
} else {
 lean_dec_ref(x_137);
 x_140 = lean_box(0);
}
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_138);
lean_ctor_set(x_141, 1, x_139);
return x_141;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; size_t x_147; size_t x_148; 
x_142 = lean_box(0);
lean_inc(x_2);
x_143 = l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5___lambda__1(x_10, x_2, x_124, x_15, x_126, x_142, x_7);
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_143, 1);
lean_inc(x_145);
lean_dec(x_143);
x_146 = lean_ctor_get(x_144, 0);
lean_inc(x_146);
lean_dec(x_144);
x_147 = 1;
x_148 = lean_usize_add(x_5, x_147);
x_5 = x_148;
x_6 = x_146;
x_7 = x_145;
goto _start;
}
}
}
}
}
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; uint8_t x_192; 
x_186 = lean_ctor_get(x_6, 0);
x_187 = lean_ctor_get(x_12, 0);
x_188 = lean_ctor_get(x_12, 1);
lean_inc(x_188);
lean_inc(x_187);
lean_dec(x_12);
x_189 = lean_ctor_get(x_186, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_186, 1);
lean_inc(x_190);
x_191 = lean_ctor_get(x_186, 2);
lean_inc(x_191);
x_192 = lean_nat_dec_lt(x_190, x_191);
if (x_192 == 0)
{
lean_object* x_193; lean_object* x_194; 
lean_dec(x_191);
lean_dec(x_190);
lean_dec(x_189);
lean_dec(x_10);
lean_dec(x_2);
x_193 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_193, 0, x_187);
lean_ctor_set(x_193, 1, x_188);
lean_ctor_set(x_6, 1, x_193);
x_194 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_194, 0, x_6);
lean_ctor_set(x_194, 1, x_7);
return x_194;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; uint64_t x_230; uint64_t x_231; uint64_t x_232; uint64_t x_233; uint64_t x_234; uint64_t x_235; uint64_t x_236; size_t x_237; size_t x_238; size_t x_239; size_t x_240; size_t x_241; lean_object* x_242; lean_object* x_243; 
lean_free_object(x_6);
if (lean_is_exclusive(x_186)) {
 lean_ctor_release(x_186, 0);
 lean_ctor_release(x_186, 1);
 lean_ctor_release(x_186, 2);
 x_195 = x_186;
} else {
 lean_dec_ref(x_186);
 x_195 = lean_box(0);
}
x_196 = lean_array_fget(x_189, x_190);
x_197 = lean_unsigned_to_nat(1u);
x_198 = lean_nat_add(x_190, x_197);
lean_dec(x_190);
if (lean_is_scalar(x_195)) {
 x_199 = lean_alloc_ctor(0, 3, 0);
} else {
 x_199 = x_195;
}
lean_ctor_set(x_199, 0, x_189);
lean_ctor_set(x_199, 1, x_198);
lean_ctor_set(x_199, 2, x_191);
x_226 = lean_ctor_get(x_188, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_188, 1);
lean_inc(x_227);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_228 = x_188;
} else {
 lean_dec_ref(x_188);
 x_228 = lean_box(0);
}
x_229 = lean_array_get_size(x_227);
x_230 = l_Lean_Name_hash___override(x_10);
x_231 = 32;
x_232 = lean_uint64_shift_right(x_230, x_231);
x_233 = lean_uint64_xor(x_230, x_232);
x_234 = 16;
x_235 = lean_uint64_shift_right(x_233, x_234);
x_236 = lean_uint64_xor(x_233, x_235);
x_237 = lean_uint64_to_usize(x_236);
x_238 = lean_usize_of_nat(x_229);
lean_dec(x_229);
x_239 = 1;
x_240 = lean_usize_sub(x_238, x_239);
x_241 = lean_usize_land(x_237, x_240);
x_242 = lean_array_uget(x_227, x_241);
x_243 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_find_x3f___spec__5(x_10, x_242);
if (lean_obj_tag(x_243) == 0)
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; uint8_t x_253; 
x_244 = lean_nat_add(x_226, x_197);
lean_dec(x_226);
lean_inc(x_196);
lean_inc(x_10);
x_245 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_245, 0, x_10);
lean_ctor_set(x_245, 1, x_196);
lean_ctor_set(x_245, 2, x_242);
x_246 = lean_array_uset(x_227, x_241, x_245);
x_247 = lean_box(0);
x_248 = lean_unsigned_to_nat(4u);
x_249 = lean_nat_mul(x_244, x_248);
x_250 = lean_unsigned_to_nat(3u);
x_251 = lean_nat_div(x_249, x_250);
lean_dec(x_249);
x_252 = lean_array_get_size(x_246);
x_253 = lean_nat_dec_le(x_251, x_252);
lean_dec(x_252);
lean_dec(x_251);
if (x_253 == 0)
{
lean_object* x_254; lean_object* x_255; 
x_254 = l_Std_DHashMap_Internal_Raw_u2080_expand___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__7(x_246);
if (lean_is_scalar(x_228)) {
 x_255 = lean_alloc_ctor(0, 2, 0);
} else {
 x_255 = x_228;
}
lean_ctor_set(x_255, 0, x_244);
lean_ctor_set(x_255, 1, x_254);
x_200 = x_247;
x_201 = x_255;
goto block_225;
}
else
{
lean_object* x_256; 
if (lean_is_scalar(x_228)) {
 x_256 = lean_alloc_ctor(0, 2, 0);
} else {
 x_256 = x_228;
}
lean_ctor_set(x_256, 0, x_244);
lean_ctor_set(x_256, 1, x_246);
x_200 = x_247;
x_201 = x_256;
goto block_225;
}
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; 
lean_dec(x_242);
x_257 = lean_ctor_get(x_243, 0);
lean_inc(x_257);
if (lean_is_exclusive(x_243)) {
 lean_ctor_release(x_243, 0);
 x_258 = x_243;
} else {
 lean_dec_ref(x_243);
 x_258 = lean_box(0);
}
if (lean_is_scalar(x_258)) {
 x_259 = lean_alloc_ctor(1, 1, 0);
} else {
 x_259 = x_258;
}
lean_ctor_set(x_259, 0, x_257);
if (lean_is_scalar(x_228)) {
 x_260 = lean_alloc_ctor(0, 2, 0);
} else {
 x_260 = x_228;
}
lean_ctor_set(x_260, 0, x_226);
lean_ctor_set(x_260, 1, x_227);
x_200 = x_259;
x_201 = x_260;
goto block_225;
}
block_225:
{
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; size_t x_207; size_t x_208; 
lean_dec(x_196);
x_202 = lean_box(0);
lean_inc(x_2);
x_203 = l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5___lambda__1(x_10, x_2, x_199, x_187, x_201, x_202, x_7);
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_203, 1);
lean_inc(x_205);
lean_dec(x_203);
x_206 = lean_ctor_get(x_204, 0);
lean_inc(x_206);
lean_dec(x_204);
x_207 = 1;
x_208 = lean_usize_add(x_5, x_207);
x_5 = x_208;
x_6 = x_206;
x_7 = x_205;
goto _start;
}
else
{
lean_object* x_210; uint8_t x_211; 
x_210 = lean_ctor_get(x_200, 0);
lean_inc(x_210);
lean_dec(x_200);
x_211 = l___private_Lean_Environment_0__Lean_equivInfo(x_210, x_196);
lean_dec(x_196);
lean_dec(x_210);
if (x_211 == 0)
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
lean_dec(x_201);
lean_dec(x_199);
x_212 = l_Lean_throwAlreadyImported___rarg(x_1, x_187, x_2, x_10, x_7);
lean_dec(x_2);
x_213 = lean_ctor_get(x_212, 0);
lean_inc(x_213);
x_214 = lean_ctor_get(x_212, 1);
lean_inc(x_214);
if (lean_is_exclusive(x_212)) {
 lean_ctor_release(x_212, 0);
 lean_ctor_release(x_212, 1);
 x_215 = x_212;
} else {
 lean_dec_ref(x_212);
 x_215 = lean_box(0);
}
if (lean_is_scalar(x_215)) {
 x_216 = lean_alloc_ctor(1, 2, 0);
} else {
 x_216 = x_215;
}
lean_ctor_set(x_216, 0, x_213);
lean_ctor_set(x_216, 1, x_214);
return x_216;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; size_t x_222; size_t x_223; 
x_217 = lean_box(0);
lean_inc(x_2);
x_218 = l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5___lambda__1(x_10, x_2, x_199, x_187, x_201, x_217, x_7);
x_219 = lean_ctor_get(x_218, 0);
lean_inc(x_219);
x_220 = lean_ctor_get(x_218, 1);
lean_inc(x_220);
lean_dec(x_218);
x_221 = lean_ctor_get(x_219, 0);
lean_inc(x_221);
lean_dec(x_219);
x_222 = 1;
x_223 = lean_usize_add(x_5, x_222);
x_5 = x_223;
x_6 = x_221;
x_7 = x_220;
goto _start;
}
}
}
}
}
}
else
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; uint8_t x_269; 
x_261 = lean_ctor_get(x_6, 1);
x_262 = lean_ctor_get(x_6, 0);
lean_inc(x_261);
lean_inc(x_262);
lean_dec(x_6);
x_263 = lean_ctor_get(x_261, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_261, 1);
lean_inc(x_264);
if (lean_is_exclusive(x_261)) {
 lean_ctor_release(x_261, 0);
 lean_ctor_release(x_261, 1);
 x_265 = x_261;
} else {
 lean_dec_ref(x_261);
 x_265 = lean_box(0);
}
x_266 = lean_ctor_get(x_262, 0);
lean_inc(x_266);
x_267 = lean_ctor_get(x_262, 1);
lean_inc(x_267);
x_268 = lean_ctor_get(x_262, 2);
lean_inc(x_268);
x_269 = lean_nat_dec_lt(x_267, x_268);
if (x_269 == 0)
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; 
lean_dec(x_268);
lean_dec(x_267);
lean_dec(x_266);
lean_dec(x_10);
lean_dec(x_2);
if (lean_is_scalar(x_265)) {
 x_270 = lean_alloc_ctor(0, 2, 0);
} else {
 x_270 = x_265;
}
lean_ctor_set(x_270, 0, x_263);
lean_ctor_set(x_270, 1, x_264);
x_271 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_271, 0, x_262);
lean_ctor_set(x_271, 1, x_270);
x_272 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_272, 0, x_271);
lean_ctor_set(x_272, 1, x_7);
return x_272;
}
else
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; uint64_t x_308; uint64_t x_309; uint64_t x_310; uint64_t x_311; uint64_t x_312; uint64_t x_313; uint64_t x_314; size_t x_315; size_t x_316; size_t x_317; size_t x_318; size_t x_319; lean_object* x_320; lean_object* x_321; 
lean_dec(x_265);
if (lean_is_exclusive(x_262)) {
 lean_ctor_release(x_262, 0);
 lean_ctor_release(x_262, 1);
 lean_ctor_release(x_262, 2);
 x_273 = x_262;
} else {
 lean_dec_ref(x_262);
 x_273 = lean_box(0);
}
x_274 = lean_array_fget(x_266, x_267);
x_275 = lean_unsigned_to_nat(1u);
x_276 = lean_nat_add(x_267, x_275);
lean_dec(x_267);
if (lean_is_scalar(x_273)) {
 x_277 = lean_alloc_ctor(0, 3, 0);
} else {
 x_277 = x_273;
}
lean_ctor_set(x_277, 0, x_266);
lean_ctor_set(x_277, 1, x_276);
lean_ctor_set(x_277, 2, x_268);
x_304 = lean_ctor_get(x_264, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_264, 1);
lean_inc(x_305);
if (lean_is_exclusive(x_264)) {
 lean_ctor_release(x_264, 0);
 lean_ctor_release(x_264, 1);
 x_306 = x_264;
} else {
 lean_dec_ref(x_264);
 x_306 = lean_box(0);
}
x_307 = lean_array_get_size(x_305);
x_308 = l_Lean_Name_hash___override(x_10);
x_309 = 32;
x_310 = lean_uint64_shift_right(x_308, x_309);
x_311 = lean_uint64_xor(x_308, x_310);
x_312 = 16;
x_313 = lean_uint64_shift_right(x_311, x_312);
x_314 = lean_uint64_xor(x_311, x_313);
x_315 = lean_uint64_to_usize(x_314);
x_316 = lean_usize_of_nat(x_307);
lean_dec(x_307);
x_317 = 1;
x_318 = lean_usize_sub(x_316, x_317);
x_319 = lean_usize_land(x_315, x_318);
x_320 = lean_array_uget(x_305, x_319);
x_321 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Environment_find_x3f___spec__5(x_10, x_320);
if (lean_obj_tag(x_321) == 0)
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; uint8_t x_331; 
x_322 = lean_nat_add(x_304, x_275);
lean_dec(x_304);
lean_inc(x_274);
lean_inc(x_10);
x_323 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_323, 0, x_10);
lean_ctor_set(x_323, 1, x_274);
lean_ctor_set(x_323, 2, x_320);
x_324 = lean_array_uset(x_305, x_319, x_323);
x_325 = lean_box(0);
x_326 = lean_unsigned_to_nat(4u);
x_327 = lean_nat_mul(x_322, x_326);
x_328 = lean_unsigned_to_nat(3u);
x_329 = lean_nat_div(x_327, x_328);
lean_dec(x_327);
x_330 = lean_array_get_size(x_324);
x_331 = lean_nat_dec_le(x_329, x_330);
lean_dec(x_330);
lean_dec(x_329);
if (x_331 == 0)
{
lean_object* x_332; lean_object* x_333; 
x_332 = l_Std_DHashMap_Internal_Raw_u2080_expand___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__7(x_324);
if (lean_is_scalar(x_306)) {
 x_333 = lean_alloc_ctor(0, 2, 0);
} else {
 x_333 = x_306;
}
lean_ctor_set(x_333, 0, x_322);
lean_ctor_set(x_333, 1, x_332);
x_278 = x_325;
x_279 = x_333;
goto block_303;
}
else
{
lean_object* x_334; 
if (lean_is_scalar(x_306)) {
 x_334 = lean_alloc_ctor(0, 2, 0);
} else {
 x_334 = x_306;
}
lean_ctor_set(x_334, 0, x_322);
lean_ctor_set(x_334, 1, x_324);
x_278 = x_325;
x_279 = x_334;
goto block_303;
}
}
else
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; 
lean_dec(x_320);
x_335 = lean_ctor_get(x_321, 0);
lean_inc(x_335);
if (lean_is_exclusive(x_321)) {
 lean_ctor_release(x_321, 0);
 x_336 = x_321;
} else {
 lean_dec_ref(x_321);
 x_336 = lean_box(0);
}
if (lean_is_scalar(x_336)) {
 x_337 = lean_alloc_ctor(1, 1, 0);
} else {
 x_337 = x_336;
}
lean_ctor_set(x_337, 0, x_335);
if (lean_is_scalar(x_306)) {
 x_338 = lean_alloc_ctor(0, 2, 0);
} else {
 x_338 = x_306;
}
lean_ctor_set(x_338, 0, x_304);
lean_ctor_set(x_338, 1, x_305);
x_278 = x_337;
x_279 = x_338;
goto block_303;
}
block_303:
{
if (lean_obj_tag(x_278) == 0)
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; size_t x_285; size_t x_286; 
lean_dec(x_274);
x_280 = lean_box(0);
lean_inc(x_2);
x_281 = l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5___lambda__1(x_10, x_2, x_277, x_263, x_279, x_280, x_7);
x_282 = lean_ctor_get(x_281, 0);
lean_inc(x_282);
x_283 = lean_ctor_get(x_281, 1);
lean_inc(x_283);
lean_dec(x_281);
x_284 = lean_ctor_get(x_282, 0);
lean_inc(x_284);
lean_dec(x_282);
x_285 = 1;
x_286 = lean_usize_add(x_5, x_285);
x_5 = x_286;
x_6 = x_284;
x_7 = x_283;
goto _start;
}
else
{
lean_object* x_288; uint8_t x_289; 
x_288 = lean_ctor_get(x_278, 0);
lean_inc(x_288);
lean_dec(x_278);
x_289 = l___private_Lean_Environment_0__Lean_equivInfo(x_288, x_274);
lean_dec(x_274);
lean_dec(x_288);
if (x_289 == 0)
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; 
lean_dec(x_279);
lean_dec(x_277);
x_290 = l_Lean_throwAlreadyImported___rarg(x_1, x_263, x_2, x_10, x_7);
lean_dec(x_2);
x_291 = lean_ctor_get(x_290, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_290, 1);
lean_inc(x_292);
if (lean_is_exclusive(x_290)) {
 lean_ctor_release(x_290, 0);
 lean_ctor_release(x_290, 1);
 x_293 = x_290;
} else {
 lean_dec_ref(x_290);
 x_293 = lean_box(0);
}
if (lean_is_scalar(x_293)) {
 x_294 = lean_alloc_ctor(1, 2, 0);
} else {
 x_294 = x_293;
}
lean_ctor_set(x_294, 0, x_291);
lean_ctor_set(x_294, 1, x_292);
return x_294;
}
else
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; size_t x_300; size_t x_301; 
x_295 = lean_box(0);
lean_inc(x_2);
x_296 = l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5___lambda__1(x_10, x_2, x_277, x_263, x_279, x_295, x_7);
x_297 = lean_ctor_get(x_296, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_296, 1);
lean_inc(x_298);
lean_dec(x_296);
x_299 = lean_ctor_get(x_297, 0);
lean_inc(x_299);
lean_dec(x_297);
x_300 = 1;
x_301 = lean_usize_add(x_5, x_300);
x_5 = x_301;
x_6 = x_299;
x_7 = x_298;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_4, x_3);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_uget(x_2, x_4);
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; size_t x_21; size_t x_22; size_t x_23; size_t x_24; size_t x_25; lean_object* x_26; uint8_t x_27; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_ctor_get(x_5, 1);
x_13 = lean_array_get_size(x_12);
x_14 = l_Lean_Name_hash___override(x_9);
x_15 = 32;
x_16 = lean_uint64_shift_right(x_14, x_15);
x_17 = lean_uint64_xor(x_14, x_16);
x_18 = 16;
x_19 = lean_uint64_shift_right(x_17, x_18);
x_20 = lean_uint64_xor(x_17, x_19);
x_21 = lean_uint64_to_usize(x_20);
x_22 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_23 = 1;
x_24 = lean_usize_sub(x_22, x_23);
x_25 = lean_usize_land(x_21, x_24);
x_26 = lean_array_uget(x_12, x_25);
x_27 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_finalizeImport___spec__1(x_9, x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_11, x_28);
lean_dec(x_11);
lean_inc(x_1);
x_30 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_30, 0, x_9);
lean_ctor_set(x_30, 1, x_1);
lean_ctor_set(x_30, 2, x_26);
x_31 = lean_array_uset(x_12, x_25, x_30);
x_32 = lean_unsigned_to_nat(4u);
x_33 = lean_nat_mul(x_29, x_32);
x_34 = lean_unsigned_to_nat(3u);
x_35 = lean_nat_div(x_33, x_34);
lean_dec(x_33);
x_36 = lean_array_get_size(x_31);
x_37 = lean_nat_dec_le(x_35, x_36);
lean_dec(x_36);
lean_dec(x_35);
if (x_37 == 0)
{
lean_object* x_38; size_t x_39; 
x_38 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_finalizeImport___spec__2(x_31);
lean_ctor_set(x_5, 1, x_38);
lean_ctor_set(x_5, 0, x_29);
x_39 = lean_usize_add(x_4, x_23);
x_4 = x_39;
goto _start;
}
else
{
size_t x_41; 
lean_ctor_set(x_5, 1, x_31);
lean_ctor_set(x_5, 0, x_29);
x_41 = lean_usize_add(x_4, x_23);
x_4 = x_41;
goto _start;
}
}
else
{
size_t x_43; 
lean_dec(x_26);
lean_dec(x_9);
x_43 = lean_usize_add(x_4, x_23);
x_4 = x_43;
goto _start;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint64_t x_48; uint64_t x_49; uint64_t x_50; uint64_t x_51; uint64_t x_52; uint64_t x_53; uint64_t x_54; size_t x_55; size_t x_56; size_t x_57; size_t x_58; size_t x_59; lean_object* x_60; uint8_t x_61; 
x_45 = lean_ctor_get(x_5, 0);
x_46 = lean_ctor_get(x_5, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_5);
x_47 = lean_array_get_size(x_46);
x_48 = l_Lean_Name_hash___override(x_9);
x_49 = 32;
x_50 = lean_uint64_shift_right(x_48, x_49);
x_51 = lean_uint64_xor(x_48, x_50);
x_52 = 16;
x_53 = lean_uint64_shift_right(x_51, x_52);
x_54 = lean_uint64_xor(x_51, x_53);
x_55 = lean_uint64_to_usize(x_54);
x_56 = lean_usize_of_nat(x_47);
lean_dec(x_47);
x_57 = 1;
x_58 = lean_usize_sub(x_56, x_57);
x_59 = lean_usize_land(x_55, x_58);
x_60 = lean_array_uget(x_46, x_59);
x_61 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_finalizeImport___spec__1(x_9, x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_62 = lean_unsigned_to_nat(1u);
x_63 = lean_nat_add(x_45, x_62);
lean_dec(x_45);
lean_inc(x_1);
x_64 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_64, 0, x_9);
lean_ctor_set(x_64, 1, x_1);
lean_ctor_set(x_64, 2, x_60);
x_65 = lean_array_uset(x_46, x_59, x_64);
x_66 = lean_unsigned_to_nat(4u);
x_67 = lean_nat_mul(x_63, x_66);
x_68 = lean_unsigned_to_nat(3u);
x_69 = lean_nat_div(x_67, x_68);
lean_dec(x_67);
x_70 = lean_array_get_size(x_65);
x_71 = lean_nat_dec_le(x_69, x_70);
lean_dec(x_70);
lean_dec(x_69);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; size_t x_74; 
x_72 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_finalizeImport___spec__2(x_65);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_63);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_usize_add(x_4, x_57);
x_4 = x_74;
x_5 = x_73;
goto _start;
}
else
{
lean_object* x_76; size_t x_77; 
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_63);
lean_ctor_set(x_76, 1, x_65);
x_77 = lean_usize_add(x_4, x_57);
x_4 = x_77;
x_5 = x_76;
goto _start;
}
}
else
{
lean_object* x_79; size_t x_80; 
lean_dec(x_60);
lean_dec(x_9);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_45);
lean_ctor_set(x_79, 1, x_46);
x_80 = lean_usize_add(x_4, x_57);
x_4 = x_80;
x_5 = x_79;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_finalizeImport___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_nat_dec_lt(x_9, x_6);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_8);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_8, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_8, x_17);
lean_dec(x_8);
x_19 = !lean_is_exclusive(x_11);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; lean_object* x_28; 
x_20 = lean_array_fget(x_2, x_9);
x_21 = lean_ctor_get(x_20, 2);
lean_inc(x_21);
x_22 = lean_array_get_size(x_21);
x_23 = l_Array_toSubarray___rarg(x_21, x_15, x_22);
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_11);
x_26 = lean_array_size(x_24);
x_27 = 0;
lean_inc(x_9);
x_28 = l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5(x_1, x_9, x_24, x_26, x_27, x_25, x_12);
lean_dec(x_24);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = !lean_is_exclusive(x_30);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; size_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_33 = lean_ctor_get(x_30, 0);
x_34 = lean_ctor_get(x_20, 3);
lean_inc(x_34);
lean_dec(x_20);
x_35 = lean_array_size(x_34);
lean_inc(x_9);
x_36 = l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__6(x_9, x_34, x_35, x_27, x_33, x_31);
lean_dec(x_34);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
lean_ctor_set(x_30, 0, x_37);
x_39 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_18;
x_9 = x_39;
x_10 = lean_box(0);
x_11 = x_30;
x_12 = x_38;
goto _start;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; size_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_41 = lean_ctor_get(x_30, 0);
x_42 = lean_ctor_get(x_30, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_30);
x_43 = lean_ctor_get(x_20, 3);
lean_inc(x_43);
lean_dec(x_20);
x_44 = lean_array_size(x_43);
lean_inc(x_9);
x_45 = l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__6(x_9, x_43, x_44, x_27, x_41, x_31);
lean_dec(x_43);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_42);
x_49 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_18;
x_9 = x_49;
x_10 = lean_box(0);
x_11 = x_48;
x_12 = x_47;
goto _start;
}
}
else
{
uint8_t x_51; 
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_9);
x_51 = !lean_is_exclusive(x_28);
if (x_51 == 0)
{
return x_28;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_28, 0);
x_53 = lean_ctor_get(x_28, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_28);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; size_t x_64; size_t x_65; lean_object* x_66; 
x_55 = lean_ctor_get(x_11, 0);
x_56 = lean_ctor_get(x_11, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_11);
x_57 = lean_array_fget(x_2, x_9);
x_58 = lean_ctor_get(x_57, 2);
lean_inc(x_58);
x_59 = lean_array_get_size(x_58);
x_60 = l_Array_toSubarray___rarg(x_58, x_15, x_59);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_55);
lean_ctor_set(x_62, 1, x_56);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_array_size(x_61);
x_65 = 0;
lean_inc(x_9);
x_66 = l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5(x_1, x_9, x_61, x_64, x_65, x_63, x_12);
lean_dec(x_61);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_69 = lean_ctor_get(x_66, 1);
lean_inc(x_69);
lean_dec(x_66);
x_70 = lean_ctor_get(x_68, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_72 = x_68;
} else {
 lean_dec_ref(x_68);
 x_72 = lean_box(0);
}
x_73 = lean_ctor_get(x_57, 3);
lean_inc(x_73);
lean_dec(x_57);
x_74 = lean_array_size(x_73);
lean_inc(x_9);
x_75 = l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__6(x_9, x_73, x_74, x_65, x_70, x_69);
lean_dec(x_73);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
if (lean_is_scalar(x_72)) {
 x_78 = lean_alloc_ctor(0, 2, 0);
} else {
 x_78 = x_72;
}
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_71);
x_79 = lean_nat_add(x_9, x_7);
lean_dec(x_9);
x_8 = x_18;
x_9 = x_79;
x_10 = lean_box(0);
x_11 = x_78;
x_12 = x_77;
goto _start;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_57);
lean_dec(x_18);
lean_dec(x_9);
x_81 = lean_ctor_get(x_66, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_66, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_83 = x_66;
} else {
 lean_dec_ref(x_66);
 x_83 = lean_box(0);
}
if (lean_is_scalar(x_83)) {
 x_84 = lean_alloc_ctor(1, 2, 0);
} else {
 x_84 = x_83;
}
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_82);
return x_84;
}
}
}
else
{
lean_object* x_85; 
lean_dec(x_9);
lean_dec(x_8);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_11);
lean_ctor_set(x_85, 1, x_12);
return x_85;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_finalizeImport___spec__8(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
x_8 = lean_array_get_size(x_7);
lean_dec(x_7);
x_9 = lean_nat_add(x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
x_10 = lean_ctor_get(x_6, 3);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_array_get_size(x_10);
lean_dec(x_10);
x_12 = lean_nat_add(x_9, x_11);
lean_dec(x_11);
lean_dec(x_9);
x_13 = 1;
x_14 = lean_usize_add(x_2, x_13);
x_2 = x_14;
x_4 = x_12;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Lean_finalizeImport___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_finalizeImport___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_finalizeImport___lambda__1___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_finalizeImport___lambda__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop(x_1, x_2, x_7, x_4, x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_finalizeImport___lambda__2___closed__1;
if (x_3 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(0);
x_13 = lean_apply_3(x_11, x_9, x_12, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_runtime_mark_persistent(x_9);
x_15 = lean_box(0);
x_16 = lean_apply_3(x_11, x_14, x_15, x_10);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_8);
if (x_17 == 0)
{
return x_8;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_8, 0);
x_19 = lean_ctor_get(x_8, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_8);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_finalizeImport(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint32_t x_4, uint8_t x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
x_11 = lean_box(0);
x_12 = lean_unsigned_to_nat(1u);
lean_inc(x_8);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_8);
lean_ctor_set(x_13, 2, x_12);
if (x_10 == 0)
{
x_14 = x_9;
goto block_76;
}
else
{
uint8_t x_77; 
x_77 = lean_nat_dec_le(x_8, x_8);
if (x_77 == 0)
{
x_14 = x_9;
goto block_76;
}
else
{
size_t x_78; size_t x_79; lean_object* x_80; 
x_78 = 0;
x_79 = lean_usize_of_nat(x_8);
x_80 = l_Array_foldlMUnsafe_fold___at_Lean_finalizeImport___spec__8(x_7, x_78, x_79, x_9);
x_14 = x_80;
goto block_76;
}
}
block_76:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_unsigned_to_nat(4u);
x_16 = lean_nat_mul(x_14, x_15);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(3u);
x_18 = lean_nat_div(x_16, x_17);
lean_dec(x_16);
x_19 = l_Nat_nextPowerOfTwo_go(x_18, x_12, lean_box(0));
lean_dec(x_18);
x_20 = lean_mk_array(x_19, x_11);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_9);
lean_ctor_set(x_21, 1, x_20);
lean_inc(x_21);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_21);
lean_inc(x_8);
x_23 = l_Std_Range_forIn_x27_loop___at_Lean_finalizeImport___spec__7(x_1, x_7, x_8, x_13, x_9, x_8, x_12, x_8, x_9, lean_box(0), x_22, x_6);
lean_dec(x_13);
lean_dec(x_8);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = 0;
x_29 = l_Lean_mkEmptyEnvironment___lambda__1___closed__5;
x_30 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set_uint8(x_30, sizeof(void*)*2, x_28);
x_31 = l_Lean_EnvExtensionInterfaceUnsafe_mkInitialExtStates(x_25);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Array_isEmpty___rarg(x_2);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_35 = lean_ctor_get(x_1, 3);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 1);
lean_inc(x_36);
lean_dec(x_1);
x_37 = 1;
x_38 = lean_box(0);
lean_inc(x_7);
x_39 = lean_alloc_ctor(0, 5, 5);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_2);
lean_ctor_set(x_39, 2, x_35);
lean_ctor_set(x_39, 3, x_36);
lean_ctor_set(x_39, 4, x_7);
lean_ctor_set_uint32(x_39, sizeof(void*)*5, x_4);
lean_ctor_set_uint8(x_39, sizeof(void*)*5 + 4, x_37);
x_40 = l_Lean_NameSet_empty;
x_41 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_41, 0, x_26);
lean_ctor_set(x_41, 1, x_30);
lean_ctor_set(x_41, 2, x_32);
lean_ctor_set(x_41, 3, x_40);
lean_ctor_set(x_41, 4, x_39);
lean_inc(x_7);
x_42 = l___private_Lean_Environment_0__Lean_setImportedEntries(x_41, x_7, x_9, x_33);
if (x_5 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_box(0);
x_46 = l_Lean_finalizeImport___lambda__2(x_7, x_3, x_5, x_43, x_45, x_44);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_ctor_get(x_42, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_42, 1);
lean_inc(x_48);
lean_dec(x_42);
x_49 = lean_runtime_mark_persistent(x_47);
x_50 = lean_box(0);
x_51 = l_Lean_finalizeImport___lambda__2(x_7, x_3, x_5, x_49, x_50, x_48);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_52 = lean_ctor_get(x_1, 3);
lean_inc(x_52);
x_53 = lean_ctor_get(x_1, 1);
lean_inc(x_53);
lean_dec(x_1);
x_54 = lean_box(0);
lean_inc(x_7);
x_55 = lean_alloc_ctor(0, 5, 5);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_2);
lean_ctor_set(x_55, 2, x_52);
lean_ctor_set(x_55, 3, x_53);
lean_ctor_set(x_55, 4, x_7);
lean_ctor_set_uint32(x_55, sizeof(void*)*5, x_4);
lean_ctor_set_uint8(x_55, sizeof(void*)*5 + 4, x_28);
x_56 = l_Lean_NameSet_empty;
x_57 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_57, 0, x_26);
lean_ctor_set(x_57, 1, x_30);
lean_ctor_set(x_57, 2, x_32);
lean_ctor_set(x_57, 3, x_56);
lean_ctor_set(x_57, 4, x_55);
lean_inc(x_7);
x_58 = l___private_Lean_Environment_0__Lean_setImportedEntries(x_57, x_7, x_9, x_33);
if (x_5 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = lean_box(0);
x_62 = l_Lean_finalizeImport___lambda__2(x_7, x_3, x_5, x_59, x_61, x_60);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_63 = lean_ctor_get(x_58, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_58, 1);
lean_inc(x_64);
lean_dec(x_58);
x_65 = lean_runtime_mark_persistent(x_63);
x_66 = lean_box(0);
x_67 = l_Lean_finalizeImport___lambda__2(x_7, x_3, x_5, x_65, x_66, x_64);
return x_67;
}
}
}
else
{
uint8_t x_68; 
lean_dec(x_30);
lean_dec(x_26);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_68 = !lean_is_exclusive(x_31);
if (x_68 == 0)
{
return x_31;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_31, 0);
x_70 = lean_ctor_get(x_31, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_31);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
uint8_t x_72; 
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_72 = !lean_is_exclusive(x_23);
if (x_72 == 0)
{
return x_23;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_23, 0);
x_74 = lean_ctor_get(x_23, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_23);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_finalizeImport___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_finalizeImport___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__5(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_forInUnsafe_loop___at_Lean_finalizeImport___spec__6(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_finalizeImport___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Std_Range_forIn_x27_loop___at_Lean_finalizeImport___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_finalizeImport___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_finalizeImport___spec__8(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_finalizeImport___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_finalizeImport___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_finalizeImport___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_Lean_finalizeImport___lambda__2(x_1, x_2, x_7, x_4, x_5, x_6);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_finalizeImport___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint32_t x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_unbox_uint32(x_4);
lean_dec(x_4);
x_8 = lean_unbox(x_5);
lean_dec(x_5);
x_9 = l_Lean_finalizeImport(x_1, x_2, x_3, x_7, x_8, x_6);
return x_9;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("import failed, trying to import module with anonymous name", 58, 58);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1___closed__1;
x_2 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_lt(x_3, x_2);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_8 = lean_array_uget(x_1, x_3);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1___closed__2;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_5);
return x_11;
}
else
{
size_t x_12; size_t x_13; lean_object* x_14; 
lean_dec(x_9);
x_12 = 1;
x_13 = lean_usize_add(x_3, x_12);
x_14 = lean_box(0);
x_3 = x_13;
x_4 = x_14;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_importModules___lambda__1(lean_object* x_1, lean_object* x_2, uint32_t x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_finalizeImport(x_7, x_1, x_2, x_3, x_4, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_importModules___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkEmptyEnvironment___lambda__1___closed__3;
x_2 = l_Lean_EnvironmentHeader_imports___default___closed__1;
x_3 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 2, x_2);
lean_ctor_set(x_3, 3, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_importModules___lambda__2(lean_object* x_1, lean_object* x_2, uint32_t x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_importModulesCore___boxed), 3, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_Lean_importModules___lambda__2___closed__1;
x_9 = lean_alloc_closure((void*)(l_Lean_ImportStateM_run___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
x_10 = lean_box_uint32(x_3);
x_11 = lean_box(x_4);
x_12 = lean_alloc_closure((void*)(l_Lean_importModules___lambda__1___boxed), 6, 4);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_10);
lean_closure_set(x_12, 3, x_11);
x_13 = lean_alloc_closure((void*)(l_EStateM_bind___rarg), 3, 2);
lean_closure_set(x_13, 0, x_9);
lean_closure_set(x_13, 1, x_12);
x_14 = l_Lean_withImporting___rarg(x_13, x_6);
return x_14;
}
}
static lean_object* _init_l_Lean_importModules___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("import", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_importModules___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lean_import_modules(lean_object* x_1, lean_object* x_2, uint32_t x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_6 = lean_array_size(x_1);
x_7 = lean_box(0);
x_8 = lean_box_usize(x_6);
x_9 = l_Lean_importModules___boxed__const__1;
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1___boxed), 5, 4);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_8);
lean_closure_set(x_10, 2, x_9);
lean_closure_set(x_10, 3, x_7);
x_11 = lean_box_uint32(x_3);
x_12 = lean_box(x_4);
lean_inc(x_2);
x_13 = lean_alloc_closure((void*)(l_Lean_importModules___lambda__2___boxed), 6, 4);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_11);
lean_closure_set(x_13, 3, x_12);
x_14 = lean_alloc_closure((void*)(l_EStateM_bind___rarg), 3, 2);
lean_closure_set(x_14, 0, x_10);
lean_closure_set(x_14, 1, x_13);
x_15 = l_Lean_importModules___closed__1;
x_16 = lean_box(0);
x_17 = l_Lean_profileitIOUnsafe___rarg(x_15, x_2, x_14, x_16, x_5);
lean_dec(x_2);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1(x_1, x_6, x_7, x_4, x_5);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_importModules___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint32_t x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_unbox_uint32(x_3);
lean_dec(x_3);
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = l_Lean_importModules___lambda__1(x_1, x_2, x_7, x_8, x_5, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_importModules___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint32_t x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_unbox_uint32(x_3);
lean_dec(x_3);
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = l_Lean_importModules___lambda__2(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_5);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_importModules___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint32_t x_6; uint8_t x_7; lean_object* x_8; 
x_6 = lean_unbox_uint32(x_3);
lean_dec(x_3);
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = lean_import_modules(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_withImportModules___rarg(lean_object* x_1, lean_object* x_2, uint32_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = 0;
x_7 = lean_import_modules(x_1, x_2, x_3, x_6, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_8);
x_10 = lean_apply_2(x_4, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_environment_free_regions(x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
lean_ctor_set(x_13, 0, x_11);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_11);
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_10, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_10, 1);
lean_inc(x_23);
lean_dec(x_10);
x_24 = lean_environment_free_regions(x_8, x_23);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set_tag(x_24, 1);
lean_ctor_set(x_24, 0, x_22);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_22);
x_29 = !lean_is_exclusive(x_24);
if (x_29 == 0)
{
return x_24;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_24, 0);
x_31 = lean_ctor_get(x_24, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_24);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_4);
x_33 = !lean_is_exclusive(x_7);
if (x_33 == 0)
{
return x_7;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_7, 0);
x_35 = lean_ctor_get(x_7, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_7);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withImportModules(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_withImportModules___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_withImportModules___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint32_t x_6; lean_object* x_7; 
x_6 = lean_unbox_uint32(x_3);
lean_dec(x_3);
x_7 = l_Lean_withImportModules___rarg(x_1, x_2, x_6, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; uint8_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = 1;
x_9 = lean_usize_add(x_3, x_8);
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; size_t x_21; size_t x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_ctor_get(x_5, 1);
x_13 = lean_array_get_size(x_12);
x_14 = l_Lean_Name_hash___override(x_7);
x_15 = 32;
x_16 = lean_uint64_shift_right(x_14, x_15);
x_17 = lean_uint64_xor(x_14, x_16);
x_18 = 16;
x_19 = lean_uint64_shift_right(x_17, x_18);
x_20 = lean_uint64_xor(x_17, x_19);
x_21 = lean_uint64_to_usize(x_20);
x_22 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_23 = lean_usize_sub(x_22, x_8);
x_24 = lean_usize_land(x_21, x_23);
x_25 = lean_array_uget(x_12, x_24);
x_26 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_NameSSet_insert___spec__6(x_7, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_11, x_27);
lean_dec(x_11);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_30, 0, x_7);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_30, 2, x_25);
x_31 = lean_array_uset(x_12, x_24, x_30);
x_32 = lean_unsigned_to_nat(4u);
x_33 = lean_nat_mul(x_28, x_32);
x_34 = lean_unsigned_to_nat(3u);
x_35 = lean_nat_div(x_33, x_34);
lean_dec(x_33);
x_36 = lean_array_get_size(x_31);
x_37 = lean_nat_dec_le(x_35, x_36);
lean_dec(x_36);
lean_dec(x_35);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_NameSSet_insert___spec__7(x_31);
lean_ctor_set(x_5, 1, x_38);
lean_ctor_set(x_5, 0, x_28);
x_3 = x_9;
goto _start;
}
else
{
lean_ctor_set(x_5, 1, x_31);
lean_ctor_set(x_5, 0, x_28);
x_3 = x_9;
goto _start;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_inc(x_1);
x_41 = lean_array_uset(x_12, x_24, x_1);
x_42 = lean_box(0);
x_43 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_NameSSet_insert___spec__10(x_7, x_42, x_25);
x_44 = lean_array_uset(x_41, x_24, x_43);
lean_ctor_set(x_5, 1, x_44);
x_3 = x_9;
goto _start;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint64_t x_49; uint64_t x_50; uint64_t x_51; uint64_t x_52; uint64_t x_53; uint64_t x_54; uint64_t x_55; size_t x_56; size_t x_57; size_t x_58; size_t x_59; lean_object* x_60; uint8_t x_61; 
x_46 = lean_ctor_get(x_5, 0);
x_47 = lean_ctor_get(x_5, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_5);
x_48 = lean_array_get_size(x_47);
x_49 = l_Lean_Name_hash___override(x_7);
x_50 = 32;
x_51 = lean_uint64_shift_right(x_49, x_50);
x_52 = lean_uint64_xor(x_49, x_51);
x_53 = 16;
x_54 = lean_uint64_shift_right(x_52, x_53);
x_55 = lean_uint64_xor(x_52, x_54);
x_56 = lean_uint64_to_usize(x_55);
x_57 = lean_usize_of_nat(x_48);
lean_dec(x_48);
x_58 = lean_usize_sub(x_57, x_8);
x_59 = lean_usize_land(x_56, x_58);
x_60 = lean_array_uget(x_47, x_59);
x_61 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_NameSSet_insert___spec__6(x_7, x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_62 = lean_unsigned_to_nat(1u);
x_63 = lean_nat_add(x_46, x_62);
lean_dec(x_46);
x_64 = lean_box(0);
x_65 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_65, 0, x_7);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set(x_65, 2, x_60);
x_66 = lean_array_uset(x_47, x_59, x_65);
x_67 = lean_unsigned_to_nat(4u);
x_68 = lean_nat_mul(x_63, x_67);
x_69 = lean_unsigned_to_nat(3u);
x_70 = lean_nat_div(x_68, x_69);
lean_dec(x_68);
x_71 = lean_array_get_size(x_66);
x_72 = lean_nat_dec_le(x_70, x_71);
lean_dec(x_71);
lean_dec(x_70);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; 
x_73 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_NameSSet_insert___spec__7(x_66);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_63);
lean_ctor_set(x_74, 1, x_73);
x_3 = x_9;
x_5 = x_74;
goto _start;
}
else
{
lean_object* x_76; 
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_63);
lean_ctor_set(x_76, 1, x_66);
x_3 = x_9;
x_5 = x_76;
goto _start;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_inc(x_1);
x_78 = lean_array_uset(x_47, x_59, x_1);
x_79 = lean_box(0);
x_80 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_NameSSet_insert___spec__10(x_7, x_79, x_60);
x_81 = lean_array_uset(x_78, x_59, x_80);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_46);
lean_ctor_set(x_82, 1, x_81);
x_3 = x_9;
x_5 = x_82;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; size_t x_11; size_t x_12; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
x_11 = 1;
x_12 = lean_usize_add(x_3, x_11);
if (x_10 == 0)
{
lean_dec(x_8);
lean_dec(x_7);
x_3 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_8, x_8);
if (x_14 == 0)
{
lean_dec(x_8);
lean_dec(x_7);
x_3 = x_12;
goto _start;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_8);
lean_dec(x_8);
lean_inc(x_1);
x_18 = l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__2(x_1, x_7, x_16, x_17, x_5);
lean_dec(x_7);
x_3 = x_12;
x_5 = x_18;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_4, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_2;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__3(x_1, x_3, x_8, x_9, x_2);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__4(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_2 == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
lean_ctor_set_uint8(x_1, sizeof(void*)*2, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_7 = 0;
x_8 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*2, x_7);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; uint8_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = 1;
x_9 = lean_usize_add(x_3, x_8);
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; size_t x_21; size_t x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_ctor_get(x_5, 1);
x_13 = lean_array_get_size(x_12);
x_14 = l_Lean_Name_hash___override(x_7);
x_15 = 32;
x_16 = lean_uint64_shift_right(x_14, x_15);
x_17 = lean_uint64_xor(x_14, x_16);
x_18 = 16;
x_19 = lean_uint64_shift_right(x_17, x_18);
x_20 = lean_uint64_xor(x_17, x_19);
x_21 = lean_uint64_to_usize(x_20);
x_22 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_23 = lean_usize_sub(x_22, x_8);
x_24 = lean_usize_land(x_21, x_23);
x_25 = lean_array_uget(x_12, x_24);
x_26 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_NameSSet_insert___spec__6(x_7, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_11, x_27);
lean_dec(x_11);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_30, 0, x_7);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_30, 2, x_25);
x_31 = lean_array_uset(x_12, x_24, x_30);
x_32 = lean_unsigned_to_nat(4u);
x_33 = lean_nat_mul(x_28, x_32);
x_34 = lean_unsigned_to_nat(3u);
x_35 = lean_nat_div(x_33, x_34);
lean_dec(x_33);
x_36 = lean_array_get_size(x_31);
x_37 = lean_nat_dec_le(x_35, x_36);
lean_dec(x_36);
lean_dec(x_35);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_NameSSet_insert___spec__7(x_31);
lean_ctor_set(x_5, 1, x_38);
lean_ctor_set(x_5, 0, x_28);
x_3 = x_9;
goto _start;
}
else
{
lean_ctor_set(x_5, 1, x_31);
lean_ctor_set(x_5, 0, x_28);
x_3 = x_9;
goto _start;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_inc(x_1);
x_41 = lean_array_uset(x_12, x_24, x_1);
x_42 = lean_box(0);
x_43 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_NameSSet_insert___spec__10(x_7, x_42, x_25);
x_44 = lean_array_uset(x_41, x_24, x_43);
lean_ctor_set(x_5, 1, x_44);
x_3 = x_9;
goto _start;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint64_t x_49; uint64_t x_50; uint64_t x_51; uint64_t x_52; uint64_t x_53; uint64_t x_54; uint64_t x_55; size_t x_56; size_t x_57; size_t x_58; size_t x_59; lean_object* x_60; uint8_t x_61; 
x_46 = lean_ctor_get(x_5, 0);
x_47 = lean_ctor_get(x_5, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_5);
x_48 = lean_array_get_size(x_47);
x_49 = l_Lean_Name_hash___override(x_7);
x_50 = 32;
x_51 = lean_uint64_shift_right(x_49, x_50);
x_52 = lean_uint64_xor(x_49, x_51);
x_53 = 16;
x_54 = lean_uint64_shift_right(x_52, x_53);
x_55 = lean_uint64_xor(x_52, x_54);
x_56 = lean_uint64_to_usize(x_55);
x_57 = lean_usize_of_nat(x_48);
lean_dec(x_48);
x_58 = lean_usize_sub(x_57, x_8);
x_59 = lean_usize_land(x_56, x_58);
x_60 = lean_array_uget(x_47, x_59);
x_61 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_NameSSet_insert___spec__6(x_7, x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_62 = lean_unsigned_to_nat(1u);
x_63 = lean_nat_add(x_46, x_62);
lean_dec(x_46);
x_64 = lean_box(0);
x_65 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_65, 0, x_7);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set(x_65, 2, x_60);
x_66 = lean_array_uset(x_47, x_59, x_65);
x_67 = lean_unsigned_to_nat(4u);
x_68 = lean_nat_mul(x_63, x_67);
x_69 = lean_unsigned_to_nat(3u);
x_70 = lean_nat_div(x_68, x_69);
lean_dec(x_68);
x_71 = lean_array_get_size(x_66);
x_72 = lean_nat_dec_le(x_70, x_71);
lean_dec(x_71);
lean_dec(x_70);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; 
x_73 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_NameSSet_insert___spec__7(x_66);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_63);
lean_ctor_set(x_74, 1, x_73);
x_3 = x_9;
x_5 = x_74;
goto _start;
}
else
{
lean_object* x_76; 
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_63);
lean_ctor_set(x_76, 1, x_66);
x_3 = x_9;
x_5 = x_76;
goto _start;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_inc(x_1);
x_78 = lean_array_uset(x_47, x_59, x_1);
x_79 = lean_box(0);
x_80 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_NameSSet_insert___spec__10(x_7, x_79, x_60);
x_81 = lean_array_uset(x_78, x_59, x_80);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_46);
lean_ctor_set(x_82, 1, x_81);
x_3 = x_9;
x_5 = x_82;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__7(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; size_t x_11; size_t x_12; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
x_11 = 1;
x_12 = lean_usize_add(x_3, x_11);
if (x_10 == 0)
{
lean_dec(x_8);
lean_dec(x_7);
x_3 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_8, x_8);
if (x_14 == 0)
{
lean_dec(x_8);
lean_dec(x_7);
x_3 = x_12;
goto _start;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_8);
lean_dec(x_8);
lean_inc(x_1);
x_18 = l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__6(x_1, x_7, x_16, x_17, x_5);
lean_dec(x_7);
x_3 = x_12;
x_5 = x_18;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_4, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_2;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__7(x_1, x_3, x_8, x_9, x_2);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__8(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = lean_array_get_size(x_6);
lean_dec(x_6);
x_8 = lean_nat_add(x_4, x_7);
lean_dec(x_7);
lean_dec(x_4);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_2 = x_10;
x_4 = x_8;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__10(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; uint8_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = 1;
x_9 = lean_usize_add(x_3, x_8);
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; size_t x_21; size_t x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_ctor_get(x_5, 1);
x_13 = lean_array_get_size(x_12);
x_14 = l_Lean_Name_hash___override(x_7);
x_15 = 32;
x_16 = lean_uint64_shift_right(x_14, x_15);
x_17 = lean_uint64_xor(x_14, x_16);
x_18 = 16;
x_19 = lean_uint64_shift_right(x_17, x_18);
x_20 = lean_uint64_xor(x_17, x_19);
x_21 = lean_uint64_to_usize(x_20);
x_22 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_23 = lean_usize_sub(x_22, x_8);
x_24 = lean_usize_land(x_21, x_23);
x_25 = lean_array_uget(x_12, x_24);
x_26 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_NameSSet_insert___spec__6(x_7, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_11, x_27);
lean_dec(x_11);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_30, 0, x_7);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_30, 2, x_25);
x_31 = lean_array_uset(x_12, x_24, x_30);
x_32 = lean_unsigned_to_nat(4u);
x_33 = lean_nat_mul(x_28, x_32);
x_34 = lean_unsigned_to_nat(3u);
x_35 = lean_nat_div(x_33, x_34);
lean_dec(x_33);
x_36 = lean_array_get_size(x_31);
x_37 = lean_nat_dec_le(x_35, x_36);
lean_dec(x_36);
lean_dec(x_35);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_NameSSet_insert___spec__7(x_31);
lean_ctor_set(x_5, 1, x_38);
lean_ctor_set(x_5, 0, x_28);
x_3 = x_9;
goto _start;
}
else
{
lean_ctor_set(x_5, 1, x_31);
lean_ctor_set(x_5, 0, x_28);
x_3 = x_9;
goto _start;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_inc(x_1);
x_41 = lean_array_uset(x_12, x_24, x_1);
x_42 = lean_box(0);
x_43 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_NameSSet_insert___spec__10(x_7, x_42, x_25);
x_44 = lean_array_uset(x_41, x_24, x_43);
lean_ctor_set(x_5, 1, x_44);
x_3 = x_9;
goto _start;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint64_t x_49; uint64_t x_50; uint64_t x_51; uint64_t x_52; uint64_t x_53; uint64_t x_54; uint64_t x_55; size_t x_56; size_t x_57; size_t x_58; size_t x_59; lean_object* x_60; uint8_t x_61; 
x_46 = lean_ctor_get(x_5, 0);
x_47 = lean_ctor_get(x_5, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_5);
x_48 = lean_array_get_size(x_47);
x_49 = l_Lean_Name_hash___override(x_7);
x_50 = 32;
x_51 = lean_uint64_shift_right(x_49, x_50);
x_52 = lean_uint64_xor(x_49, x_51);
x_53 = 16;
x_54 = lean_uint64_shift_right(x_52, x_53);
x_55 = lean_uint64_xor(x_52, x_54);
x_56 = lean_uint64_to_usize(x_55);
x_57 = lean_usize_of_nat(x_48);
lean_dec(x_48);
x_58 = lean_usize_sub(x_57, x_8);
x_59 = lean_usize_land(x_56, x_58);
x_60 = lean_array_uget(x_47, x_59);
x_61 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_NameSSet_insert___spec__6(x_7, x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_62 = lean_unsigned_to_nat(1u);
x_63 = lean_nat_add(x_46, x_62);
lean_dec(x_46);
x_64 = lean_box(0);
x_65 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_65, 0, x_7);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set(x_65, 2, x_60);
x_66 = lean_array_uset(x_47, x_59, x_65);
x_67 = lean_unsigned_to_nat(4u);
x_68 = lean_nat_mul(x_63, x_67);
x_69 = lean_unsigned_to_nat(3u);
x_70 = lean_nat_div(x_68, x_69);
lean_dec(x_68);
x_71 = lean_array_get_size(x_66);
x_72 = lean_nat_dec_le(x_70, x_71);
lean_dec(x_71);
lean_dec(x_70);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; 
x_73 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_NameSSet_insert___spec__7(x_66);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_63);
lean_ctor_set(x_74, 1, x_73);
x_3 = x_9;
x_5 = x_74;
goto _start;
}
else
{
lean_object* x_76; 
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_63);
lean_ctor_set(x_76, 1, x_66);
x_3 = x_9;
x_5 = x_76;
goto _start;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_inc(x_1);
x_78 = lean_array_uset(x_47, x_59, x_1);
x_79 = lean_box(0);
x_80 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_NameSSet_insert___spec__10(x_7, x_79, x_60);
x_81 = lean_array_uset(x_78, x_59, x_80);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_46);
lean_ctor_set(x_82, 1, x_81);
x_3 = x_9;
x_5 = x_82;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__11(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; size_t x_11; size_t x_12; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
x_11 = 1;
x_12 = lean_usize_add(x_3, x_11);
if (x_10 == 0)
{
lean_dec(x_8);
lean_dec(x_7);
x_3 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_8, x_8);
if (x_14 == 0)
{
lean_dec(x_8);
lean_dec(x_7);
x_3 = x_12;
goto _start;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_8);
lean_dec(x_8);
lean_inc(x_1);
x_18 = l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__10(x_1, x_7, x_16, x_17, x_5);
lean_dec(x_7);
x_3 = x_12;
x_5 = x_18;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_4, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_2;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__11(x_1, x_3, x_8, x_9, x_2);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_Lean_SMap_insert___at_Lean_NameSSet_insert___spec__1(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Nat_nextPowerOfTwo_go(x_1, x_2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__1;
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
x_5 = lean_box(0);
if (x_4 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
x_6 = l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__3;
x_7 = l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__1(x_5, x_6, x_1);
x_8 = 1;
x_9 = l_Lean_mkEmptyEnvironment___lambda__1___closed__5;
x_10 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
lean_ctor_set_uint8(x_10, sizeof(void*)*2, x_8);
x_11 = l_Lean_SMap_switch___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__4(x_10);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_le(x_2, x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_2);
x_13 = l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__3;
x_14 = l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__5(x_5, x_13, x_1);
x_15 = 1;
x_16 = l_Lean_mkEmptyEnvironment___lambda__1___closed__5;
x_17 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set_uint8(x_17, sizeof(void*)*2, x_15);
x_18 = l_Lean_SMap_switch___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__4(x_17);
return x_18;
}
else
{
size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_19 = 0;
x_20 = lean_usize_of_nat(x_2);
lean_dec(x_2);
x_21 = l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__8(x_1, x_19, x_20, x_3);
x_22 = lean_unsigned_to_nat(4u);
x_23 = lean_nat_mul(x_21, x_22);
lean_dec(x_21);
x_24 = lean_unsigned_to_nat(3u);
x_25 = lean_nat_div(x_23, x_24);
lean_dec(x_23);
x_26 = lean_unsigned_to_nat(1u);
x_27 = l_Nat_nextPowerOfTwo_go(x_25, x_26, lean_box(0));
lean_dec(x_25);
x_28 = lean_mk_array(x_27, x_5);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_3);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__9(x_5, x_29, x_1);
x_31 = 1;
x_32 = l_Lean_mkEmptyEnvironment___lambda__1___closed__5;
x_33 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set_uint8(x_33, sizeof(void*)*2, x_31);
x_34 = l_Lean_SMap_switch___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__4(x_33);
return x_34;
}
}
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("namespacesExt", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___auto____x40_Lean_Environment___hyg_2608____closed__1;
x_2 = l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_toArray___rarg), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__2;
x_2 = l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__3;
x_3 = l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__4;
x_4 = l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__5;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__6;
x_3 = l_Lean_registerSimplePersistentEnvExtension___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__2(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__3(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__6(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__7(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__5(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__8(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__10(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__11(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_mkStateFromImportedEntries___at_Lean_initFn____x40_Lean_Environment___hyg_6441____spec__9(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Kernel_Diagnostics_unfoldCounter___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_mkEmptyEnvironment___lambda__1___closed__5;
return x_1;
}
}
static uint8_t _init_l_Lean_Kernel_Diagnostics_enabled___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l_Lean_Kernel_instInhabitedDiagnostics___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_mkEmptyEnvironment___lambda__1___closed__5;
x_2 = 0;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Kernel_instInhabitedDiagnostics() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Kernel_instInhabitedDiagnostics___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Environment___hyg_6569____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Kernel_instInhabitedDiagnostics___closed__1;
x_2 = lean_alloc_closure((void*)(l_EStateM_pure___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_Environment___hyg_6569_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_initFn____x40_Lean_Environment___hyg_6569____closed__1;
x_3 = l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t lean_kernel_diag_is_enabled(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Diagnostics_isEnabled___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_kernel_diag_is_enabled(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_enableDiag___lambda__1(uint8_t x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_ctor_set_uint8(x_2, sizeof(void*)*1, x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set_uint8(x_5, sizeof(void*)*1, x_1);
return x_5;
}
}
}
static lean_object* _init_l_Lean_Kernel_enableDiag___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_diagExt;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_enableDiag(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Kernel_enableDiag___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_Lean_Kernel_enableDiag___closed__1;
x_6 = l_Lean_EnvExtension_modifyState___rarg(x_5, x_1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_enableDiag___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_Kernel_enableDiag___lambda__1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_enableDiag___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_Lean_Kernel_enableDiag(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = l_Lean_Kernel_instInhabitedDiagnostics;
x_3 = l_Lean_Kernel_enableDiag___closed__1;
x_4 = l_Lean_EnvExtension_getState___rarg(x_2, x_3, x_1);
x_5 = lean_ctor_get_uint8(x_4, sizeof(void*)*1);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_isDiagnosticsEnabled___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Kernel_isDiagnosticsEnabled(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_resetDiag___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_dec(x_3);
x_4 = l_Lean_mkEmptyEnvironment___lambda__1___closed__5;
lean_ctor_set(x_1, 0, x_4);
return x_1;
}
else
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_6 = l_Lean_mkEmptyEnvironment___lambda__1___closed__5;
x_7 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set_uint8(x_7, sizeof(void*)*1, x_5);
return x_7;
}
}
}
static lean_object* _init_l_Lean_Kernel_resetDiag___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Kernel_resetDiag___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_resetDiag(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Kernel_enableDiag___closed__1;
x_3 = l_Lean_Kernel_resetDiag___closed__1;
x_4 = l_Lean_EnvExtension_modifyState___rarg(x_2, x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; size_t x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = 5;
x_7 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__2;
x_8 = lean_usize_land(x_2, x_7);
x_9 = lean_usize_to_nat(x_8);
x_10 = lean_box(2);
x_11 = lean_array_get(x_10, x_5, x_9);
lean_dec(x_9);
lean_dec(x_5);
switch (lean_obj_tag(x_11)) {
case 0:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_name_eq(x_3, x_12);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_13);
lean_free_object(x_1);
x_15 = lean_box(0);
return x_15;
}
else
{
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
case 1:
{
lean_object* x_16; size_t x_17; 
lean_free_object(x_1);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_usize_shift_right(x_2, x_6);
x_1 = x_16;
x_2 = x_17;
goto _start;
}
default: 
{
lean_object* x_19; 
lean_free_object(x_1);
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; size_t x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = 5;
x_22 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__2;
x_23 = lean_usize_land(x_2, x_22);
x_24 = lean_usize_to_nat(x_23);
x_25 = lean_box(2);
x_26 = lean_array_get(x_25, x_20, x_24);
lean_dec(x_24);
lean_dec(x_20);
switch (lean_obj_tag(x_26)) {
case 0:
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_name_eq(x_3, x_27);
lean_dec(x_27);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_28);
x_30 = lean_box(0);
return x_30;
}
else
{
lean_object* x_31; 
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_28);
return x_31;
}
}
case 1:
{
lean_object* x_32; size_t x_33; 
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_usize_shift_right(x_2, x_21);
x_1 = x_32;
x_2 = x_33;
goto _start;
}
default: 
{
lean_object* x_35; 
x_35 = lean_box(0);
return x_35;
}
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_1, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_1, 1);
lean_inc(x_37);
lean_dec(x_1);
x_38 = lean_unsigned_to_nat(0u);
x_39 = l_Lean_PersistentHashMap_findAtAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__3(x_36, x_37, lean_box(0), x_38, x_3);
lean_dec(x_37);
lean_dec(x_36);
return x_39;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Kernel_Diagnostics_recordUnfold___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; size_t x_4; lean_object* x_5; 
x_3 = l_Lean_Name_hash___override(x_2);
x_4 = lean_uint64_to_usize(x_3);
x_5 = l_Lean_PersistentHashMap_findAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__2(x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Kernel_Diagnostics_recordUnfold___spec__6(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = l_Lean_Name_hash___override(x_9);
x_12 = lean_uint64_to_usize(x_11);
x_13 = 1;
x_14 = lean_usize_sub(x_1, x_13);
x_15 = 5;
x_16 = lean_usize_mul(x_15, x_14);
x_17 = lean_usize_shift_right(x_12, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_20 = l_Lean_PersistentHashMap_insertAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__5(x_6, x_17, x_1, x_9, x_10);
x_4 = lean_box(0);
x_5 = x_19;
x_6 = x_20;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_name_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__2;
x_11 = lean_usize_land(x_2, x_10);
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(0);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_name_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_name_eq(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = lean_usize_shift_right(x_2, x_9);
x_37 = lean_usize_add(x_3, x_8);
x_38 = l_Lean_PersistentHashMap_insertAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__5(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = lean_usize_shift_right(x_2, x_9);
x_42 = lean_usize_add(x_3, x_8);
x_43 = l_Lean_PersistentHashMap_insertAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__5(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__2;
x_52 = lean_usize_land(x_2, x_51);
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(0);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_name_eq(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = lean_usize_shift_right(x_2, x_50);
x_74 = lean_usize_add(x_3, x_49);
x_75 = l_Lean_PersistentHashMap_insertAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__5(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_1);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; size_t x_85; uint8_t x_86; 
x_83 = lean_unsigned_to_nat(0u);
x_84 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__7(x_1, x_83, x_4, x_5);
x_85 = 7;
x_86 = lean_usize_dec_le(x_85, x_3);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_87 = l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(x_84);
x_88 = lean_unsigned_to_nat(4u);
x_89 = lean_nat_dec_lt(x_87, x_88);
lean_dec(x_87);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_90 = lean_ctor_get(x_84, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_84, 1);
lean_inc(x_91);
lean_dec(x_84);
x_92 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__3;
x_93 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Kernel_Diagnostics_recordUnfold___spec__6(x_3, x_90, x_91, lean_box(0), x_83, x_92);
lean_dec(x_91);
lean_dec(x_90);
return x_93;
}
else
{
return x_84;
}
}
else
{
return x_84;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; size_t x_99; uint8_t x_100; 
x_94 = lean_ctor_get(x_1, 0);
x_95 = lean_ctor_get(x_1, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_1);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_unsigned_to_nat(0u);
x_98 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__7(x_96, x_97, x_4, x_5);
x_99 = 7;
x_100 = lean_usize_dec_le(x_99, x_3);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_101 = l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(x_98);
x_102 = lean_unsigned_to_nat(4u);
x_103 = lean_nat_dec_lt(x_101, x_102);
lean_dec(x_101);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_104 = lean_ctor_get(x_98, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_98, 1);
lean_inc(x_105);
lean_dec(x_98);
x_106 = l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__3;
x_107 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Kernel_Diagnostics_recordUnfold___spec__6(x_3, x_104, x_105, lean_box(0), x_97, x_106);
lean_dec(x_105);
lean_dec(x_104);
return x_107;
}
else
{
return x_98;
}
}
else
{
return x_98;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Kernel_Diagnostics_recordUnfold___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint64_t x_4; size_t x_5; size_t x_6; lean_object* x_7; 
x_4 = l_Lean_Name_hash___override(x_2);
x_5 = lean_uint64_to_usize(x_4);
x_6 = 1;
x_7 = l_Lean_PersistentHashMap_insertAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__5(x_1, x_5, x_6, x_2, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* lean_kernel_record_unfold(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
if (x_3 == 0)
{
lean_dec(x_2);
return x_1;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Kernel_Diagnostics_recordUnfold___spec__1(x_5, x_2);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Lean_PersistentHashMap_insert___at_Lean_Kernel_Diagnostics_recordUnfold___spec__4(x_5, x_2, x_7);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_9, x_10);
lean_dec(x_9);
x_12 = l_Lean_PersistentHashMap_insert___at_Lean_Kernel_Diagnostics_recordUnfold___spec__4(x_5, x_2, x_11);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
lean_inc(x_13);
x_14 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Kernel_Diagnostics_recordUnfold___spec__1(x_13, x_2);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = l_Lean_PersistentHashMap_insert___at_Lean_Kernel_Diagnostics_recordUnfold___spec__4(x_13, x_2, x_15);
x_17 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set_uint8(x_17, sizeof(void*)*1, x_3);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_18, x_19);
lean_dec(x_18);
x_21 = l_Lean_PersistentHashMap_insert___at_Lean_Kernel_Diagnostics_recordUnfold___spec__4(x_13, x_2, x_20);
x_22 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set_uint8(x_22, sizeof(void*)*1, x_3);
return x_22;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PersistentHashMap_findAtAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Lean_PersistentHashMap_findAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Kernel_Diagnostics_recordUnfold___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Kernel_Diagnostics_recordUnfold___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Kernel_Diagnostics_recordUnfold___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Kernel_Diagnostics_recordUnfold___spec__6(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Lean_PersistentHashMap_insertAux___at_Lean_Kernel_Diagnostics_recordUnfold___spec__5(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* lean_kernel_get_diag(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Kernel_instInhabitedDiagnostics;
x_3 = l_Lean_Kernel_enableDiag___closed__1;
x_4 = l_Lean_EnvExtension_getState___rarg(x_2, x_3, x_1);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lean_kernel_set_diag(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Kernel_enableDiag___closed__1;
x_4 = l_Lean_EnvExtension_setState___rarg(x_3, x_1, x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Environment_registerNamespace___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_namespacesExt;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_registerNamespace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = l_Lean_NameSSet_instInhabited;
x_4 = l_Lean_Environment_registerNamespace___closed__1;
x_5 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_3, x_4, x_1);
x_6 = l_Lean_SMap_contains___at_Lean_NameSSet_contains___spec__1(x_5, x_2);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_4, x_1, x_2);
return x_7;
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Environment_isNamespace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = l_Lean_NameSSet_instInhabited;
x_4 = l_Lean_Environment_registerNamespace___closed__1;
x_5 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_3, x_4, x_1);
x_6 = l_Lean_SMap_contains___at_Lean_NameSSet_contains___spec__1(x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_isNamespace___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Environment_isNamespace(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getNamespaceSet(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_NameSSet_instInhabited;
x_3 = l_Lean_Environment_registerNamespace___closed__1;
x_4 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_getNamespaceSet___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Environment_getNamespaceSet(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Environment_0__Lean_Environment_isNamespaceName(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
x_1 = x_2;
goto _start;
}
}
else
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_Environment_isNamespaceName___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Environment_0__Lean_Environment_isNamespaceName(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_Environment_registerNamePrefixes(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = l___private_Lean_Environment_0__Lean_Environment_isNamespaceName(x_3);
if (x_4 == 0)
{
lean_dec(x_3);
return x_1;
}
else
{
lean_object* x_5; 
lean_inc(x_3);
x_5 = l_Lean_Environment_registerNamespace(x_1, x_3);
x_1 = x_5;
x_2 = x_3;
goto _start;
}
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
LEAN_EXPORT lean_object* lean_environment_add(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_ConstantInfo_name(x_2);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4; lean_object* x_5; uint32_t x_6; uint32_t x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_string_utf8_get(x_4, x_5);
lean_dec(x_4);
x_7 = 95;
x_8 = lean_uint32_dec_eq(x_6, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = l___private_Lean_Environment_0__Lean_Environment_registerNamePrefixes(x_1, x_3);
x_10 = l___private_Lean_Environment_0__Lean_Environment_addAux(x_9, x_2);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_3);
x_11 = l___private_Lean_Environment_0__Lean_Environment_addAux(x_1, x_2);
return x_11;
}
}
else
{
lean_object* x_12; 
lean_dec(x_3);
x_12 = l___private_Lean_Environment_0__Lean_Environment_addAux(x_1, x_2);
return x_12;
}
}
}
static lean_object* _init_l_List_foldl___at_Lean_Environment_displayStats___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", ", 2, 2);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Environment_displayStats___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_List_foldl___at_Lean_Environment_displayStats___spec__2___closed__1;
x_6 = lean_string_append(x_1, x_5);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = 1;
x_9 = l_Lean_instToStringImport___closed__1;
x_10 = l_Lean_Name_toString(x_7, x_8, x_9);
x_11 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
lean_dec(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l_Lean_instToStringImport___closed__2;
x_13 = lean_string_append(x_10, x_12);
x_14 = lean_string_append(x_6, x_13);
lean_dec(x_13);
x_1 = x_14;
x_2 = x_4;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = l_Lean_instToStringImport___closed__3;
x_17 = lean_string_append(x_10, x_16);
x_18 = lean_string_append(x_6, x_17);
lean_dec(x_17);
x_1 = x_18;
x_2 = x_4;
goto _start;
}
}
}
}
static lean_object* _init_l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("[]", 2, 2);
return x_1;
}
}
static lean_object* _init_l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("[", 1, 1);
return x_1;
}
}
static lean_object* _init_l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("]", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_toString___at_Lean_Environment_displayStats___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__1;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = 1;
x_7 = l_Lean_instToStringImport___closed__1;
x_8 = l_Lean_Name_toString(x_5, x_6, x_7);
x_9 = lean_ctor_get_uint8(x_4, sizeof(void*)*1);
lean_dec(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = l_Lean_instToStringImport___closed__2;
x_11 = lean_string_append(x_8, x_10);
x_12 = l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__2;
x_13 = lean_string_append(x_12, x_11);
lean_dec(x_11);
x_14 = l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__3;
x_15 = lean_string_append(x_13, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = l_Lean_instToStringImport___closed__3;
x_17 = lean_string_append(x_8, x_16);
x_18 = l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__2;
x_19 = lean_string_append(x_18, x_17);
lean_dec(x_17);
x_20 = l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__3;
x_21 = lean_string_append(x_19, x_20);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; uint32_t x_28; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = 1;
x_25 = l_Lean_instToStringImport___closed__1;
x_26 = l_Lean_Name_toString(x_23, x_24, x_25);
x_27 = lean_ctor_get_uint8(x_22, sizeof(void*)*1);
lean_dec(x_22);
x_28 = 93;
if (x_27 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = l_Lean_instToStringImport___closed__2;
x_30 = lean_string_append(x_26, x_29);
x_31 = l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__2;
x_32 = lean_string_append(x_31, x_30);
lean_dec(x_30);
x_33 = l_List_foldl___at_Lean_Environment_displayStats___spec__2(x_32, x_3);
x_34 = lean_string_push(x_33, x_28);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = l_Lean_instToStringImport___closed__3;
x_36 = lean_string_append(x_26, x_35);
x_37 = l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__2;
x_38 = lean_string_append(x_37, x_36);
lean_dec(x_36);
x_39 = l_List_foldl___at_Lean_Environment_displayStats___spec__2(x_38, x_3);
x_40 = lean_string_push(x_39, x_28);
return x_40;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_numBuckets___at_Lean_Environment_displayStats___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_DHashMap_Raw_Internal_numBuckets___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_numBuckets___at_Lean_Environment_displayStats___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = l_Std_DHashMap_Raw_Internal_numBuckets___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = lean_array_get_size(x_6);
lean_dec(x_6);
x_8 = lean_nat_add(x_4, x_7);
lean_dec(x_7);
lean_dec(x_4);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_2 = x_10;
x_4 = x_8;
goto _start;
}
else
{
return x_4;
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l___private_Init_Data_Repr_0__Nat_reprFast(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  number of imported entries: ", 30, 30);
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__2;
x_2 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__3;
x_9 = l_IO_println___at_Lean_instEval___spec__1(x_8, x_3);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = lean_nat_dec_le(x_5, x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__3;
x_12 = l_IO_println___at_Lean_instEval___spec__1(x_11, x_3);
return x_12;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = 0;
x_14 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__5(x_4, x_13, x_14, x_6);
x_16 = l___private_Init_Data_Repr_0__Nat_reprFast(x_15);
x_17 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__2;
x_18 = lean_string_append(x_17, x_16);
lean_dec(x_16);
x_19 = l_IO_println___at_Lean_instEval___spec__1(x_18, x_3);
return x_19;
}
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("extension '", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  ", 2, 2);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_3, x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_5);
x_8 = lean_array_uget(x_2, x_3);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
x_10 = 1;
x_11 = l_Lean_instToStringImport___closed__1;
x_12 = l_Lean_Name_toString(x_9, x_10, x_11);
x_13 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__1;
x_14 = lean_string_append(x_13, x_12);
lean_dec(x_12);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__2;
x_16 = lean_string_append(x_14, x_15);
x_17 = l_IO_println___at_Lean_instEval___spec__1(x_16, x_6);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_ctor_get(x_8, 0);
lean_inc(x_19);
x_20 = l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___closed__1;
x_21 = l_Lean_EnvExtension_getState___rarg(x_20, x_19, x_1);
lean_dec(x_19);
x_22 = lean_ctor_get(x_8, 5);
lean_inc(x_22);
lean_dec(x_8);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
x_24 = lean_apply_1(x_22, x_23);
x_25 = l_Std_Format_isNil(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_26 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__3;
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
x_28 = l_Std_Format_defWidth;
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_format_pretty(x_27, x_28, x_29, x_29);
x_31 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__4;
x_32 = lean_string_append(x_31, x_30);
lean_dec(x_30);
x_33 = l_IO_println___at_Lean_instEval___spec__1(x_32, x_18);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1(x_21, x_34, x_35);
lean_dec(x_34);
lean_dec(x_21);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; size_t x_39; size_t x_40; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = 1;
x_40 = lean_usize_add(x_3, x_39);
x_3 = x_40;
x_5 = x_37;
x_6 = x_38;
goto _start;
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_36);
if (x_42 == 0)
{
return x_36;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_36, 0);
x_44 = lean_ctor_get(x_36, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_36);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_21);
x_46 = !lean_is_exclusive(x_33);
if (x_46 == 0)
{
return x_33;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_33, 0);
x_48 = lean_ctor_get(x_33, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_33);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_24);
x_50 = lean_box(0);
x_51 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1(x_21, x_50, x_18);
lean_dec(x_21);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; size_t x_54; size_t x_55; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = 1;
x_55 = lean_usize_add(x_3, x_54);
x_3 = x_55;
x_5 = x_52;
x_6 = x_53;
goto _start;
}
else
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_51);
if (x_57 == 0)
{
return x_51;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_51, 0);
x_59 = lean_ctor_get(x_51, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_51);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_8);
x_61 = !lean_is_exclusive(x_17);
if (x_61 == 0)
{
return x_17;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_17, 0);
x_63 = lean_ctor_get(x_17, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_17);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
lean_object* x_65; 
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_5);
lean_ctor_set(x_65, 1, x_6);
return x_65;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__7(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; uint8_t x_8; size_t x_9; size_t x_10; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_8 = lean_compacted_region_is_memory_mapped(x_7);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
if (x_8 == 0)
{
x_2 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box_usize(x_7);
x_13 = lean_array_push(x_4, x_12);
x_2 = x_10;
x_4 = x_13;
goto _start;
}
}
else
{
return x_4;
}
}
}
static lean_object* _init_l_Lean_Environment_displayStats___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("#", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Environment_displayStats___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("direct imports:                        ", 39, 39);
return x_1;
}
}
static lean_object* _init_l_Lean_Environment_displayStats___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("number of imported modules:            ", 39, 39);
return x_1;
}
}
static lean_object* _init_l_Lean_Environment_displayStats___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("number of memory-mapped modules:       ", 39, 39);
return x_1;
}
}
static lean_object* _init_l_Lean_Environment_displayStats___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("number of buckets for imported consts: ", 39, 39);
return x_1;
}
}
static lean_object* _init_l_Lean_Environment_displayStats___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("trust level:                           ", 39, 39);
return x_1;
}
}
static lean_object* _init_l_Lean_Environment_displayStats___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("number of extensions:                  ", 39, 39);
return x_1;
}
}
LEAN_EXPORT lean_object* lean_display_stats(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_3 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__2;
x_4 = lean_st_ref_get(x_3, x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
x_9 = lean_array_to_list(x_8);
x_10 = l_List_toString___at_Lean_Environment_displayStats___spec__1(x_9);
x_11 = l_Lean_Environment_displayStats___closed__1;
x_12 = lean_string_append(x_11, x_10);
lean_dec(x_10);
x_13 = l_Lean_Environment_displayStats___closed__2;
x_14 = lean_string_append(x_13, x_12);
lean_dec(x_12);
x_15 = l_IO_println___at_Lean_instEval___spec__1(x_14, x_6);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_7, 2);
lean_inc(x_17);
x_18 = lean_array_get_size(x_17);
lean_inc(x_18);
x_19 = l___private_Init_Data_Repr_0__Nat_reprFast(x_18);
x_20 = l_Lean_Environment_displayStats___closed__3;
x_21 = lean_string_append(x_20, x_19);
lean_dec(x_19);
x_22 = l_IO_println___at_Lean_instEval___spec__1(x_21, x_16);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_94; uint8_t x_95; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_94 = lean_unsigned_to_nat(0u);
x_95 = lean_nat_dec_lt(x_94, x_18);
if (x_95 == 0)
{
lean_object* x_96; 
lean_dec(x_18);
lean_dec(x_17);
x_96 = l_Lean_EnvironmentHeader_imports___default___closed__1;
x_24 = x_96;
goto block_93;
}
else
{
uint8_t x_97; 
x_97 = lean_nat_dec_le(x_18, x_18);
if (x_97 == 0)
{
lean_object* x_98; 
lean_dec(x_18);
lean_dec(x_17);
x_98 = l_Lean_EnvironmentHeader_imports___default___closed__1;
x_24 = x_98;
goto block_93;
}
else
{
size_t x_99; size_t x_100; lean_object* x_101; lean_object* x_102; 
x_99 = 0;
x_100 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_101 = l_Lean_EnvironmentHeader_imports___default___closed__1;
x_102 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__7(x_17, x_99, x_100, x_101);
lean_dec(x_17);
x_24 = x_102;
goto block_93;
}
}
block_93:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_array_get_size(x_24);
lean_dec(x_24);
x_26 = l___private_Init_Data_Repr_0__Nat_reprFast(x_25);
x_27 = l_Lean_Environment_displayStats___closed__4;
x_28 = lean_string_append(x_27, x_26);
lean_dec(x_26);
x_29 = l_IO_println___at_Lean_instEval___spec__1(x_28, x_23);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
x_32 = l_Lean_SMap_numBuckets___at_Lean_Environment_displayStats___spec__3(x_31);
lean_dec(x_31);
x_33 = l___private_Init_Data_Repr_0__Nat_reprFast(x_32);
x_34 = l_Lean_Environment_displayStats___closed__5;
x_35 = lean_string_append(x_34, x_33);
lean_dec(x_33);
x_36 = l_IO_println___at_Lean_instEval___spec__1(x_35, x_30);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; uint32_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_ctor_get_uint32(x_7, sizeof(void*)*5);
lean_dec(x_7);
x_39 = lean_uint32_to_nat(x_38);
x_40 = l___private_Init_Data_Repr_0__Nat_reprFast(x_39);
x_41 = l_Lean_Environment_displayStats___closed__6;
x_42 = lean_string_append(x_41, x_40);
lean_dec(x_40);
x_43 = l_IO_println___at_Lean_instEval___spec__1(x_42, x_37);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_ctor_get(x_1, 2);
lean_inc(x_45);
x_46 = lean_array_get_size(x_45);
lean_dec(x_45);
x_47 = l___private_Init_Data_Repr_0__Nat_reprFast(x_46);
x_48 = l_Lean_Environment_displayStats___closed__7;
x_49 = lean_string_append(x_48, x_47);
lean_dec(x_47);
x_50 = l_IO_println___at_Lean_instEval___spec__1(x_49, x_44);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_52 = lean_ctor_get(x_50, 1);
x_53 = lean_ctor_get(x_50, 0);
lean_dec(x_53);
x_54 = lean_array_get_size(x_5);
x_55 = lean_unsigned_to_nat(0u);
x_56 = lean_nat_dec_lt(x_55, x_54);
if (x_56 == 0)
{
lean_object* x_57; 
lean_dec(x_54);
lean_dec(x_5);
lean_dec(x_1);
x_57 = lean_box(0);
lean_ctor_set(x_50, 0, x_57);
return x_50;
}
else
{
uint8_t x_58; 
x_58 = lean_nat_dec_le(x_54, x_54);
if (x_58 == 0)
{
lean_object* x_59; 
lean_dec(x_54);
lean_dec(x_5);
lean_dec(x_1);
x_59 = lean_box(0);
lean_ctor_set(x_50, 0, x_59);
return x_50;
}
else
{
size_t x_60; size_t x_61; lean_object* x_62; lean_object* x_63; 
lean_free_object(x_50);
x_60 = 0;
x_61 = lean_usize_of_nat(x_54);
lean_dec(x_54);
x_62 = lean_box(0);
x_63 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6(x_1, x_5, x_60, x_61, x_62, x_52);
lean_dec(x_5);
lean_dec(x_1);
return x_63;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_64 = lean_ctor_get(x_50, 1);
lean_inc(x_64);
lean_dec(x_50);
x_65 = lean_array_get_size(x_5);
x_66 = lean_unsigned_to_nat(0u);
x_67 = lean_nat_dec_lt(x_66, x_65);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; 
lean_dec(x_65);
lean_dec(x_5);
lean_dec(x_1);
x_68 = lean_box(0);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_64);
return x_69;
}
else
{
uint8_t x_70; 
x_70 = lean_nat_dec_le(x_65, x_65);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_65);
lean_dec(x_5);
lean_dec(x_1);
x_71 = lean_box(0);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_64);
return x_72;
}
else
{
size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; 
x_73 = 0;
x_74 = lean_usize_of_nat(x_65);
lean_dec(x_65);
x_75 = lean_box(0);
x_76 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6(x_1, x_5, x_73, x_74, x_75, x_64);
lean_dec(x_5);
lean_dec(x_1);
return x_76;
}
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_5);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_50);
if (x_77 == 0)
{
return x_50;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_50, 0);
x_79 = lean_ctor_get(x_50, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_50);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_5);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_43);
if (x_81 == 0)
{
return x_43;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_43, 0);
x_83 = lean_ctor_get(x_43, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_43);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
else
{
uint8_t x_85; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_36);
if (x_85 == 0)
{
return x_36;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_36, 0);
x_87 = lean_ctor_get(x_36, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_36);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_89 = !lean_is_exclusive(x_29);
if (x_89 == 0)
{
return x_29;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_29, 0);
x_91 = lean_ctor_get(x_29, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_29);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
}
else
{
uint8_t x_103; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_103 = !lean_is_exclusive(x_22);
if (x_103 == 0)
{
return x_22;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_22, 0);
x_105 = lean_ctor_get(x_22, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_22);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
return x_106;
}
}
}
else
{
uint8_t x_107; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_107 = !lean_is_exclusive(x_15);
if (x_107 == 0)
{
return x_15;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_15, 0);
x_109 = lean_ctor_get(x_15, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_15);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_numBuckets___at_Lean_Environment_displayStats___spec__4___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_DHashMap_Internal_numBuckets___at_Lean_Environment_displayStats___spec__4(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_numBuckets___at_Lean_Environment_displayStats___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_SMap_numBuckets___at_Lean_Environment_displayStats___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__5(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__7(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_evalConst___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_eval_const(x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unexpected type at '", 20, 20);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("', `", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("` expected", 10, 10);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_3 = 1;
x_4 = l_Lean_instToStringImport___closed__1;
x_5 = l_Lean_Name_toString(x_2, x_3, x_4);
x_6 = l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__2;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_Lean_Name_toString(x_1, x_3, x_4);
x_11 = lean_string_append(x_9, x_10);
lean_dec(x_10);
x_12 = l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__3;
x_13 = lean_string_append(x_11, x_12);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Environment_evalConstCheck___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unknown constant '", 18, 18);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_evalConstCheck___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_4);
lean_inc(x_1);
x_5 = lean_environment_find(x_1, x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = 1;
x_7 = l_Lean_instToStringImport___closed__1;
x_8 = l_Lean_Name_toString(x_4, x_6, x_7);
x_9 = l_Lean_Environment_evalConstCheck___rarg___closed__1;
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__2;
x_12 = lean_string_append(x_10, x_11);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_5, 0);
lean_inc(x_14);
lean_dec(x_5);
x_15 = l_Lean_ConstantInfo_type(x_14);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 4)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_name_eq(x_16, x_3);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_1);
x_18 = l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg(x_3, x_4);
return x_18;
}
else
{
lean_object* x_19; 
lean_dec(x_3);
x_19 = lean_eval_const(x_1, x_2, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_19;
}
}
else
{
lean_object* x_20; 
lean_dec(x_15);
lean_dec(x_1);
x_20 = l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg(x_3, x_4);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_evalConstCheck(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Environment_evalConstCheck___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_evalConstCheck___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Environment_evalConstCheck___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Lean_Environment_hasUnsafe___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 4)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_environment_find(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_Lean_ConstantInfo_isUnsafe(x_6);
lean_dec(x_6);
return x_7;
}
}
else
{
uint8_t x_8; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = 0;
return x_8;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Environment_hasUnsafe(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Lean_Environment_hasUnsafe___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_find_expr(x_3, x_2);
lean_dec(x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 1;
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_hasUnsafe___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Environment_hasUnsafe___lambda__1(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_hasUnsafe___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Environment_hasUnsafe(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_isDefEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_kernel_is_def_eq(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Lean_Kernel_isDefEqGuarded(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_kernel_is_def_eq(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
lean_dec(x_5);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_isDefEqGuarded___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Lean_Kernel_isDefEqGuarded(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_whnf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_kernel_whnf(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_check___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_kernel_check(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadEnvOfMonadLift___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_apply_2(x_2, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadEnvOfMonadLift___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___rarg___lambda__1), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadEnvOfMonadLift(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferrringUnsafe___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_7);
x_8 = l_Lean_Environment_hasUnsafe(x_7, x_1);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_3);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_4);
lean_ctor_set(x_11, 2, x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_12);
if (x_8 == 0)
{
uint8_t x_14; 
x_14 = l_Lean_Environment_hasUnsafe(x_7, x_5);
if (x_14 == 0)
{
uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_15 = 1;
x_16 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_5);
lean_ctor_set(x_16, 2, x_6);
lean_ctor_set(x_16, 3, x_13);
lean_ctor_set_uint8(x_16, sizeof(void*)*4, x_15);
x_17 = lean_apply_2(x_10, lean_box(0), x_16);
return x_17;
}
else
{
uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_18 = 0;
x_19 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_19, 0, x_11);
lean_ctor_set(x_19, 1, x_5);
lean_ctor_set(x_19, 2, x_6);
lean_ctor_set(x_19, 3, x_13);
lean_ctor_set_uint8(x_19, sizeof(void*)*4, x_18);
x_20 = lean_apply_2(x_10, lean_box(0), x_19);
return x_20;
}
}
else
{
uint8_t x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_7);
x_21 = 0;
x_22 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_22, 0, x_11);
lean_ctor_set(x_22, 1, x_5);
lean_ctor_set(x_22, 2, x_6);
lean_ctor_set(x_22, 3, x_13);
lean_ctor_set_uint8(x_22, sizeof(void*)*4, x_21);
x_23 = lean_apply_2(x_10, lean_box(0), x_22);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferrringUnsafe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_alloc_closure((void*)(l_Lean_mkDefinitionValInferrringUnsafe___rarg___lambda__1), 7, 6);
lean_closure_set(x_10, 0, x_5);
lean_closure_set(x_10, 1, x_1);
lean_closure_set(x_10, 2, x_3);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_6);
lean_closure_set(x_10, 5, x_7);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferrringUnsafe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_mkDefinitionValInferrringUnsafe___rarg), 7, 0);
return x_2;
}
}
lean_object* initialize_Init_Control_StateRef(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_Array_BinSearch(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_Stream(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_ImportingFlag(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Data_HashMap(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Data_SMap(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Declaration(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_LocalContext(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_Path(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_FindExpr(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_Profile(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_InstantiateLevelParams(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Environment(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_StateRef(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_BinSearch(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Stream(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ImportingFlag(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_HashMap(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_SMap(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Declaration(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_LocalContext(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Path(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_FindExpr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Profile(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_InstantiateLevelParams(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_EnvExtensionStateSpec___closed__1 = _init_l_Lean_EnvExtensionStateSpec___closed__1();
lean_mark_persistent(l_Lean_EnvExtensionStateSpec___closed__1);
l_Lean_EnvExtensionStateSpec = _init_l_Lean_EnvExtensionStateSpec();
lean_mark_persistent(l_Lean_EnvExtensionStateSpec);
l_Lean_instInhabitedEnvExtensionState = _init_l_Lean_instInhabitedEnvExtensionState();
lean_mark_persistent(l_Lean_instInhabitedEnvExtensionState);
l_Lean_instModuleIdxBEq = _init_l_Lean_instModuleIdxBEq();
lean_mark_persistent(l_Lean_instModuleIdxBEq);
l_Lean_instModuleIdxToString___closed__1 = _init_l_Lean_instModuleIdxToString___closed__1();
lean_mark_persistent(l_Lean_instModuleIdxToString___closed__1);
l_Lean_instModuleIdxToString = _init_l_Lean_instModuleIdxToString();
lean_mark_persistent(l_Lean_instModuleIdxToString);
l_Lean_instInhabitedModuleIdx = _init_l_Lean_instInhabitedModuleIdx();
lean_mark_persistent(l_Lean_instInhabitedModuleIdx);
l_Lean_Import_runtimeOnly___default = _init_l_Lean_Import_runtimeOnly___default();
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__1 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__1();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__1);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__2 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__2();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__2);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__3 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__3();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__3);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__4 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__4();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__4);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__5 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__5();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__5);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__6 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__6();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__6);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__7 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__7();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__7);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__8 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__8();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__8);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__9 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__9();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__9);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__10 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__10();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__10);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__11 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__11();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__11);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__12 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__12();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__12);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__13 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__13();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__13);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__14 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__14();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__14);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__15 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__15();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__15);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__16 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__16();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__16);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__17 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__17();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__17);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__18 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__18();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__18);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__19 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__19();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__19);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__20 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__20();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__20);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__21 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__21();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__21);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__22 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__22();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__22);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__23 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__23();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__23);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__24 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__24();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__24);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__25 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__25();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__25);
l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__26 = _init_l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__26();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_reprImport____x40_Lean_Environment___hyg_84____closed__26);
l_Lean_instReprImport___closed__1 = _init_l_Lean_instReprImport___closed__1();
lean_mark_persistent(l_Lean_instReprImport___closed__1);
l_Lean_instReprImport = _init_l_Lean_instReprImport();
lean_mark_persistent(l_Lean_instReprImport);
l_Lean_instInhabitedImport___closed__1 = _init_l_Lean_instInhabitedImport___closed__1();
lean_mark_persistent(l_Lean_instInhabitedImport___closed__1);
l_Lean_instInhabitedImport = _init_l_Lean_instInhabitedImport();
lean_mark_persistent(l_Lean_instInhabitedImport);
l_Lean_instToStringImport___closed__1 = _init_l_Lean_instToStringImport___closed__1();
lean_mark_persistent(l_Lean_instToStringImport___closed__1);
l_Lean_instToStringImport___closed__2 = _init_l_Lean_instToStringImport___closed__2();
lean_mark_persistent(l_Lean_instToStringImport___closed__2);
l_Lean_instToStringImport___closed__3 = _init_l_Lean_instToStringImport___closed__3();
lean_mark_persistent(l_Lean_instToStringImport___closed__3);
l_Lean_EnvExtensionEntrySpec = _init_l_Lean_EnvExtensionEntrySpec();
l_Lean_instInhabitedModuleData___closed__1 = _init_l_Lean_instInhabitedModuleData___closed__1();
lean_mark_persistent(l_Lean_instInhabitedModuleData___closed__1);
l_Lean_instInhabitedModuleData___closed__2 = _init_l_Lean_instInhabitedModuleData___closed__2();
lean_mark_persistent(l_Lean_instInhabitedModuleData___closed__2);
l_Lean_instInhabitedModuleData = _init_l_Lean_instInhabitedModuleData();
lean_mark_persistent(l_Lean_instInhabitedModuleData);
l_Lean_EnvironmentHeader_trustLevel___default = _init_l_Lean_EnvironmentHeader_trustLevel___default();
l_Lean_EnvironmentHeader_quotInit___default = _init_l_Lean_EnvironmentHeader_quotInit___default();
l_Lean_EnvironmentHeader_mainModule___default = _init_l_Lean_EnvironmentHeader_mainModule___default();
lean_mark_persistent(l_Lean_EnvironmentHeader_mainModule___default);
l_Lean_EnvironmentHeader_imports___default___closed__1 = _init_l_Lean_EnvironmentHeader_imports___default___closed__1();
lean_mark_persistent(l_Lean_EnvironmentHeader_imports___default___closed__1);
l_Lean_EnvironmentHeader_imports___default = _init_l_Lean_EnvironmentHeader_imports___default();
lean_mark_persistent(l_Lean_EnvironmentHeader_imports___default);
l_Lean_EnvironmentHeader_regions___default = _init_l_Lean_EnvironmentHeader_regions___default();
lean_mark_persistent(l_Lean_EnvironmentHeader_regions___default);
l_Lean_EnvironmentHeader_moduleNames___default = _init_l_Lean_EnvironmentHeader_moduleNames___default();
lean_mark_persistent(l_Lean_EnvironmentHeader_moduleNames___default);
l_Lean_EnvironmentHeader_moduleData___default = _init_l_Lean_EnvironmentHeader_moduleData___default();
lean_mark_persistent(l_Lean_EnvironmentHeader_moduleData___default);
l_Lean_Environment_header___default___closed__1 = _init_l_Lean_Environment_header___default___closed__1();
lean_mark_persistent(l_Lean_Environment_header___default___closed__1);
l_Lean_Environment_header___default = _init_l_Lean_Environment_header___default();
lean_mark_persistent(l_Lean_Environment_header___default);
l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__1 = _init_l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__1();
l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__2 = _init_l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__2();
l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__3 = _init_l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__3();
lean_mark_persistent(l_Lean_PersistentHashMap_insertAux___at___private_Lean_Environment_0__Lean_Environment_addAux___spec__3___closed__3);
l_Lean_instInhabitedEnvExtensionInterface___closed__1 = _init_l_Lean_instInhabitedEnvExtensionInterface___closed__1();
lean_mark_persistent(l_Lean_instInhabitedEnvExtensionInterface___closed__1);
l_Lean_instInhabitedEnvExtensionInterface___closed__2 = _init_l_Lean_instInhabitedEnvExtensionInterface___closed__2();
lean_mark_persistent(l_Lean_instInhabitedEnvExtensionInterface___closed__2);
l_Lean_instInhabitedEnvExtensionInterface___closed__3 = _init_l_Lean_instInhabitedEnvExtensionInterface___closed__3();
lean_mark_persistent(l_Lean_instInhabitedEnvExtensionInterface___closed__3);
l_Lean_instInhabitedEnvExtensionInterface___closed__4 = _init_l_Lean_instInhabitedEnvExtensionInterface___closed__4();
lean_mark_persistent(l_Lean_instInhabitedEnvExtensionInterface___closed__4);
l_Lean_instInhabitedEnvExtensionInterface___closed__5 = _init_l_Lean_instInhabitedEnvExtensionInterface___closed__5();
lean_mark_persistent(l_Lean_instInhabitedEnvExtensionInterface___closed__5);
l_Lean_instInhabitedEnvExtensionInterface___closed__6 = _init_l_Lean_instInhabitedEnvExtensionInterface___closed__6();
lean_mark_persistent(l_Lean_instInhabitedEnvExtensionInterface___closed__6);
l_Lean_instInhabitedEnvExtensionInterface = _init_l_Lean_instInhabitedEnvExtensionInterface();
lean_mark_persistent(l_Lean_instInhabitedEnvExtensionInterface);
l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1___closed__1 = _init_l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1___closed__1();
l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1___closed__2 = _init_l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1___closed__2();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1___closed__2);
l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__1 = _init_l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__1();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__1);
l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__2 = _init_l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__2();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___closed__2);
if (builtin) {res = l_Lean_EnvExtensionInterfaceUnsafe_initFn____x40_Lean_Environment___hyg_1444_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_envExtensionsRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_envExtensionsRef);
lean_dec_ref(res);
}l_Lean_EnvExtensionInterfaceUnsafe_ensureExtensionsArraySize_loop___closed__1 = _init_l_Lean_EnvExtensionInterfaceUnsafe_ensureExtensionsArraySize_loop___closed__1();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_ensureExtensionsArraySize_loop___closed__1);
l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_invalidExtMsg___closed__1 = _init_l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_invalidExtMsg___closed__1();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_invalidExtMsg___closed__1);
l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_invalidExtMsg = _init_l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_invalidExtMsg();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_EnvExtensionInterfaceUnsafe_invalidExtMsg);
l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__1 = _init_l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__1();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__1);
l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__2 = _init_l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__2();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__2);
l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__3 = _init_l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__3();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_setState___rarg___closed__3);
l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg___closed__1 = _init_l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg___closed__1();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg___closed__1);
l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg___closed__2 = _init_l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg___closed__2();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_modifyState___rarg___closed__2);
l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg___closed__1 = _init_l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg___closed__1();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg___closed__1);
l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg___closed__2 = _init_l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg___closed__2();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg___closed__2);
l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___closed__1 = _init_l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___closed__1();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___closed__1);
l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___closed__2 = _init_l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___closed__2();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg___closed__2);
l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__1 = _init_l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__1();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__1);
l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__2 = _init_l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__2();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__2);
l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__3 = _init_l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__3();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__3);
l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__4 = _init_l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__4();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__4);
l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__5 = _init_l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__5();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__5);
l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__6 = _init_l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__6();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__6);
l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__7 = _init_l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__7();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__7);
l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__8 = _init_l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__8();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_imp___closed__8);
l_Lean_EnvExtensionInterfaceUnsafe_imp = _init_l_Lean_EnvExtensionInterfaceUnsafe_imp();
lean_mark_persistent(l_Lean_EnvExtensionInterfaceUnsafe_imp);
l_Lean_mkEmptyEnvironment___lambda__1___closed__1 = _init_l_Lean_mkEmptyEnvironment___lambda__1___closed__1();
lean_mark_persistent(l_Lean_mkEmptyEnvironment___lambda__1___closed__1);
l_Lean_mkEmptyEnvironment___lambda__1___closed__2 = _init_l_Lean_mkEmptyEnvironment___lambda__1___closed__2();
lean_mark_persistent(l_Lean_mkEmptyEnvironment___lambda__1___closed__2);
l_Lean_mkEmptyEnvironment___lambda__1___closed__3 = _init_l_Lean_mkEmptyEnvironment___lambda__1___closed__3();
lean_mark_persistent(l_Lean_mkEmptyEnvironment___lambda__1___closed__3);
l_Lean_mkEmptyEnvironment___lambda__1___closed__4 = _init_l_Lean_mkEmptyEnvironment___lambda__1___closed__4();
lean_mark_persistent(l_Lean_mkEmptyEnvironment___lambda__1___closed__4);
l_Lean_mkEmptyEnvironment___lambda__1___closed__5 = _init_l_Lean_mkEmptyEnvironment___lambda__1___closed__5();
lean_mark_persistent(l_Lean_mkEmptyEnvironment___lambda__1___closed__5);
l_Lean_mkEmptyEnvironment___lambda__1___closed__6 = _init_l_Lean_mkEmptyEnvironment___lambda__1___closed__6();
lean_mark_persistent(l_Lean_mkEmptyEnvironment___lambda__1___closed__6);
l_Lean_mkEmptyEnvironment___closed__1 = _init_l_Lean_mkEmptyEnvironment___closed__1();
lean_mark_persistent(l_Lean_mkEmptyEnvironment___closed__1);
l_Lean_mkEmptyEnvironment___closed__2 = _init_l_Lean_mkEmptyEnvironment___closed__2();
lean_mark_persistent(l_Lean_mkEmptyEnvironment___closed__2);
l_Lean_instInhabitedPersistentEnvExtension___closed__1 = _init_l_Lean_instInhabitedPersistentEnvExtension___closed__1();
lean_mark_persistent(l_Lean_instInhabitedPersistentEnvExtension___closed__1);
l_Lean_instInhabitedPersistentEnvExtension___closed__2 = _init_l_Lean_instInhabitedPersistentEnvExtension___closed__2();
lean_mark_persistent(l_Lean_instInhabitedPersistentEnvExtension___closed__2);
l_Lean_instInhabitedPersistentEnvExtension___closed__3 = _init_l_Lean_instInhabitedPersistentEnvExtension___closed__3();
lean_mark_persistent(l_Lean_instInhabitedPersistentEnvExtension___closed__3);
l_Lean_instInhabitedPersistentEnvExtension___closed__4 = _init_l_Lean_instInhabitedPersistentEnvExtension___closed__4();
lean_mark_persistent(l_Lean_instInhabitedPersistentEnvExtension___closed__4);
l_Lean_instInhabitedPersistentEnvExtension___closed__5 = _init_l_Lean_instInhabitedPersistentEnvExtension___closed__5();
lean_mark_persistent(l_Lean_instInhabitedPersistentEnvExtension___closed__5);
if (builtin) {res = l_Lean_initFn____x40_Lean_Environment___hyg_2563_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_persistentEnvExtensionsRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_persistentEnvExtensionsRef);
lean_dec_ref(res);
}l___auto____x40_Lean_Environment___hyg_2608____closed__1 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__1();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__1);
l___auto____x40_Lean_Environment___hyg_2608____closed__2 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__2();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__2);
l___auto____x40_Lean_Environment___hyg_2608____closed__3 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__3();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__3);
l___auto____x40_Lean_Environment___hyg_2608____closed__4 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__4();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__4);
l___auto____x40_Lean_Environment___hyg_2608____closed__5 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__5();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__5);
l___auto____x40_Lean_Environment___hyg_2608____closed__6 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__6();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__6);
l___auto____x40_Lean_Environment___hyg_2608____closed__7 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__7();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__7);
l___auto____x40_Lean_Environment___hyg_2608____closed__8 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__8();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__8);
l___auto____x40_Lean_Environment___hyg_2608____closed__9 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__9();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__9);
l___auto____x40_Lean_Environment___hyg_2608____closed__10 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__10();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__10);
l___auto____x40_Lean_Environment___hyg_2608____closed__11 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__11();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__11);
l___auto____x40_Lean_Environment___hyg_2608____closed__12 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__12();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__12);
l___auto____x40_Lean_Environment___hyg_2608____closed__13 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__13();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__13);
l___auto____x40_Lean_Environment___hyg_2608____closed__14 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__14();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__14);
l___auto____x40_Lean_Environment___hyg_2608____closed__15 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__15();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__15);
l___auto____x40_Lean_Environment___hyg_2608____closed__16 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__16();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__16);
l___auto____x40_Lean_Environment___hyg_2608____closed__17 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__17();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__17);
l___auto____x40_Lean_Environment___hyg_2608____closed__18 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__18();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__18);
l___auto____x40_Lean_Environment___hyg_2608____closed__19 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__19();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__19);
l___auto____x40_Lean_Environment___hyg_2608____closed__20 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__20();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__20);
l___auto____x40_Lean_Environment___hyg_2608____closed__21 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__21();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__21);
l___auto____x40_Lean_Environment___hyg_2608____closed__22 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__22();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__22);
l___auto____x40_Lean_Environment___hyg_2608____closed__23 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__23();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__23);
l___auto____x40_Lean_Environment___hyg_2608____closed__24 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__24();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__24);
l___auto____x40_Lean_Environment___hyg_2608____closed__25 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__25();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__25);
l___auto____x40_Lean_Environment___hyg_2608____closed__26 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__26();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__26);
l___auto____x40_Lean_Environment___hyg_2608____closed__27 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__27();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__27);
l___auto____x40_Lean_Environment___hyg_2608____closed__28 = _init_l___auto____x40_Lean_Environment___hyg_2608____closed__28();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608____closed__28);
l___auto____x40_Lean_Environment___hyg_2608_ = _init_l___auto____x40_Lean_Environment___hyg_2608_();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2608_);
l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__1 = _init_l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__1();
lean_mark_persistent(l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__1);
l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__2 = _init_l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__2();
lean_mark_persistent(l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2___closed__2);
l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1 = _init_l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1();
lean_mark_persistent(l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1);
l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2 = _init_l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2();
lean_mark_persistent(l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2);
l___auto____x40_Lean_Environment___hyg_2986_ = _init_l___auto____x40_Lean_Environment___hyg_2986_();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_2986_);
l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___closed__1 = _init_l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___closed__1();
lean_mark_persistent(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___closed__1);
l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___closed__2 = _init_l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___closed__2();
lean_mark_persistent(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___closed__2);
l_Lean_registerSimplePersistentEnvExtension___rarg___closed__1 = _init_l_Lean_registerSimplePersistentEnvExtension___rarg___closed__1();
lean_mark_persistent(l_Lean_registerSimplePersistentEnvExtension___rarg___closed__1);
l___auto____x40_Lean_Environment___hyg_3303_ = _init_l___auto____x40_Lean_Environment___hyg_3303_();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_3303_);
l_Array_qsort_sort___at_Lean_mkTagDeclarationExtension___spec__1___closed__1 = _init_l_Array_qsort_sort___at_Lean_mkTagDeclarationExtension___spec__1___closed__1();
lean_mark_persistent(l_Array_qsort_sort___at_Lean_mkTagDeclarationExtension___spec__1___closed__1);
l_Lean_mkTagDeclarationExtension___closed__1 = _init_l_Lean_mkTagDeclarationExtension___closed__1();
lean_mark_persistent(l_Lean_mkTagDeclarationExtension___closed__1);
l_Lean_mkTagDeclarationExtension___closed__2 = _init_l_Lean_mkTagDeclarationExtension___closed__2();
lean_mark_persistent(l_Lean_mkTagDeclarationExtension___closed__2);
l_Lean_mkTagDeclarationExtension___closed__3 = _init_l_Lean_mkTagDeclarationExtension___closed__3();
lean_mark_persistent(l_Lean_mkTagDeclarationExtension___closed__3);
l_Lean_TagDeclarationExtension_instInhabited___closed__1 = _init_l_Lean_TagDeclarationExtension_instInhabited___closed__1();
lean_mark_persistent(l_Lean_TagDeclarationExtension_instInhabited___closed__1);
l_Lean_TagDeclarationExtension_instInhabited = _init_l_Lean_TagDeclarationExtension_instInhabited();
lean_mark_persistent(l_Lean_TagDeclarationExtension_instInhabited);
l_Lean_TagDeclarationExtension_tag___closed__1 = _init_l_Lean_TagDeclarationExtension_tag___closed__1();
lean_mark_persistent(l_Lean_TagDeclarationExtension_tag___closed__1);
l_Lean_TagDeclarationExtension_tag___closed__2 = _init_l_Lean_TagDeclarationExtension_tag___closed__2();
lean_mark_persistent(l_Lean_TagDeclarationExtension_tag___closed__2);
l_Lean_TagDeclarationExtension_tag___closed__3 = _init_l_Lean_TagDeclarationExtension_tag___closed__3();
lean_mark_persistent(l_Lean_TagDeclarationExtension_tag___closed__3);
l_Lean_TagDeclarationExtension_tag___closed__4 = _init_l_Lean_TagDeclarationExtension_tag___closed__4();
lean_mark_persistent(l_Lean_TagDeclarationExtension_tag___closed__4);
l_Lean_TagDeclarationExtension_tag___closed__5 = _init_l_Lean_TagDeclarationExtension_tag___closed__5();
lean_mark_persistent(l_Lean_TagDeclarationExtension_tag___closed__5);
l_Lean_TagDeclarationExtension_isTagged___closed__1 = _init_l_Lean_TagDeclarationExtension_isTagged___closed__1();
lean_mark_persistent(l_Lean_TagDeclarationExtension_isTagged___closed__1);
l___auto____x40_Lean_Environment___hyg_3459_ = _init_l___auto____x40_Lean_Environment___hyg_3459_();
lean_mark_persistent(l___auto____x40_Lean_Environment___hyg_3459_);
l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___closed__1 = _init_l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___closed__1();
lean_mark_persistent(l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___closed__1);
l_Lean_mkMapDeclarationExtension___rarg___closed__1 = _init_l_Lean_mkMapDeclarationExtension___rarg___closed__1();
lean_mark_persistent(l_Lean_mkMapDeclarationExtension___rarg___closed__1);
l_Lean_mkMapDeclarationExtension___rarg___closed__2 = _init_l_Lean_mkMapDeclarationExtension___rarg___closed__2();
lean_mark_persistent(l_Lean_mkMapDeclarationExtension___rarg___closed__2);
l_Lean_mkMapDeclarationExtension___rarg___closed__3 = _init_l_Lean_mkMapDeclarationExtension___rarg___closed__3();
lean_mark_persistent(l_Lean_mkMapDeclarationExtension___rarg___closed__3);
l_Lean_MapDeclarationExtension_instInhabited___closed__1 = _init_l_Lean_MapDeclarationExtension_instInhabited___closed__1();
lean_mark_persistent(l_Lean_MapDeclarationExtension_instInhabited___closed__1);
l_Lean_MapDeclarationExtension_insert___rarg___closed__1 = _init_l_Lean_MapDeclarationExtension_insert___rarg___closed__1();
lean_mark_persistent(l_Lean_MapDeclarationExtension_insert___rarg___closed__1);
l_Lean_MapDeclarationExtension_insert___rarg___closed__2 = _init_l_Lean_MapDeclarationExtension_insert___rarg___closed__2();
lean_mark_persistent(l_Lean_MapDeclarationExtension_insert___rarg___closed__2);
l_Lean_MapDeclarationExtension_insert___rarg___closed__3 = _init_l_Lean_MapDeclarationExtension_insert___rarg___closed__3();
lean_mark_persistent(l_Lean_MapDeclarationExtension_insert___rarg___closed__3);
l_Lean_MapDeclarationExtension_insert___rarg___closed__4 = _init_l_Lean_MapDeclarationExtension_insert___rarg___closed__4();
lean_mark_persistent(l_Lean_MapDeclarationExtension_insert___rarg___closed__4);
l_Lean_MapDeclarationExtension_find_x3f___rarg___closed__1 = _init_l_Lean_MapDeclarationExtension_find_x3f___rarg___closed__1();
lean_mark_persistent(l_Lean_MapDeclarationExtension_find_x3f___rarg___closed__1);
l_Lean_mkModuleData___closed__1 = _init_l_Lean_mkModuleData___closed__1();
lean_mark_persistent(l_Lean_mkModuleData___closed__1);
l_Lean_mkModuleData___closed__2 = _init_l_Lean_mkModuleData___closed__2();
lean_mark_persistent(l_Lean_mkModuleData___closed__2);
l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3___closed__1 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Environment_0__Lean_setImportedEntries___spec__3___closed__1);
l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___closed__1 = _init_l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___closed__1();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_finalizePersistentExtensions_loop___closed__1);
l_Lean_ImportState_moduleNameSet___default = _init_l_Lean_ImportState_moduleNameSet___default();
lean_mark_persistent(l_Lean_ImportState_moduleNameSet___default);
l_Lean_ImportState_moduleNames___default = _init_l_Lean_ImportState_moduleNames___default();
lean_mark_persistent(l_Lean_ImportState_moduleNames___default);
l_Lean_ImportState_moduleData___default = _init_l_Lean_ImportState_moduleData___default();
lean_mark_persistent(l_Lean_ImportState_moduleData___default);
l_Lean_ImportState_regions___default = _init_l_Lean_ImportState_regions___default();
lean_mark_persistent(l_Lean_ImportState_regions___default);
l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__1 = _init_l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__1();
lean_mark_persistent(l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__1);
l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__2 = _init_l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__2();
lean_mark_persistent(l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__2);
l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__3 = _init_l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__3();
lean_mark_persistent(l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__3);
l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__4 = _init_l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__4();
lean_mark_persistent(l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_throwAlreadyImported___spec__1___closed__4);
l_Lean_throwAlreadyImported___rarg___closed__1 = _init_l_Lean_throwAlreadyImported___rarg___closed__1();
lean_mark_persistent(l_Lean_throwAlreadyImported___rarg___closed__1);
l_Lean_throwAlreadyImported___rarg___closed__2 = _init_l_Lean_throwAlreadyImported___rarg___closed__2();
lean_mark_persistent(l_Lean_throwAlreadyImported___rarg___closed__2);
l_Lean_throwAlreadyImported___rarg___closed__3 = _init_l_Lean_throwAlreadyImported___rarg___closed__3();
lean_mark_persistent(l_Lean_throwAlreadyImported___rarg___closed__3);
l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__1___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__1___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__1___closed__1);
l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__1);
l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__2);
l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__3 = _init_l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_importModulesCore___spec__1___lambda__2___closed__3);
l_Lean_finalizeImport___lambda__2___closed__1 = _init_l_Lean_finalizeImport___lambda__2___closed__1();
lean_mark_persistent(l_Lean_finalizeImport___lambda__2___closed__1);
l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1___closed__1);
l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_importModules___spec__1___closed__2);
l_Lean_importModules___lambda__2___closed__1 = _init_l_Lean_importModules___lambda__2___closed__1();
lean_mark_persistent(l_Lean_importModules___lambda__2___closed__1);
l_Lean_importModules___closed__1 = _init_l_Lean_importModules___closed__1();
lean_mark_persistent(l_Lean_importModules___closed__1);
l_Lean_importModules___boxed__const__1 = _init_l_Lean_importModules___boxed__const__1();
lean_mark_persistent(l_Lean_importModules___boxed__const__1);
l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__1 = _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__1();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__1);
l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__2 = _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__2();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__2);
l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__3 = _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__3();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Environment___hyg_6441____lambda__2___closed__3);
l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__1 = _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__1();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__1);
l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__2 = _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__2();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__2);
l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__3 = _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__3();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__3);
l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__4 = _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__4();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__4);
l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__5 = _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__5();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__5);
l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__6 = _init_l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__6();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Environment___hyg_6441____closed__6);
if (builtin) {res = l_Lean_initFn____x40_Lean_Environment___hyg_6441_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_namespacesExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_namespacesExt);
lean_dec_ref(res);
}l_Lean_Kernel_Diagnostics_unfoldCounter___default = _init_l_Lean_Kernel_Diagnostics_unfoldCounter___default();
lean_mark_persistent(l_Lean_Kernel_Diagnostics_unfoldCounter___default);
l_Lean_Kernel_Diagnostics_enabled___default = _init_l_Lean_Kernel_Diagnostics_enabled___default();
l_Lean_Kernel_instInhabitedDiagnostics___closed__1 = _init_l_Lean_Kernel_instInhabitedDiagnostics___closed__1();
lean_mark_persistent(l_Lean_Kernel_instInhabitedDiagnostics___closed__1);
l_Lean_Kernel_instInhabitedDiagnostics = _init_l_Lean_Kernel_instInhabitedDiagnostics();
lean_mark_persistent(l_Lean_Kernel_instInhabitedDiagnostics);
l_Lean_initFn____x40_Lean_Environment___hyg_6569____closed__1 = _init_l_Lean_initFn____x40_Lean_Environment___hyg_6569____closed__1();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Environment___hyg_6569____closed__1);
if (builtin) {res = l_Lean_initFn____x40_Lean_Environment___hyg_6569_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_diagExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_diagExt);
lean_dec_ref(res);
}l_Lean_Kernel_enableDiag___closed__1 = _init_l_Lean_Kernel_enableDiag___closed__1();
lean_mark_persistent(l_Lean_Kernel_enableDiag___closed__1);
l_Lean_Kernel_resetDiag___closed__1 = _init_l_Lean_Kernel_resetDiag___closed__1();
lean_mark_persistent(l_Lean_Kernel_resetDiag___closed__1);
l_Lean_Environment_registerNamespace___closed__1 = _init_l_Lean_Environment_registerNamespace___closed__1();
lean_mark_persistent(l_Lean_Environment_registerNamespace___closed__1);
l_List_foldl___at_Lean_Environment_displayStats___spec__2___closed__1 = _init_l_List_foldl___at_Lean_Environment_displayStats___spec__2___closed__1();
lean_mark_persistent(l_List_foldl___at_Lean_Environment_displayStats___spec__2___closed__1);
l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__1 = _init_l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__1();
lean_mark_persistent(l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__1);
l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__2 = _init_l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__2();
lean_mark_persistent(l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__2);
l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__3 = _init_l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__3();
lean_mark_persistent(l_List_toString___at_Lean_Environment_displayStats___spec__1___closed__3);
l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__1 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__1);
l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__2 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__2();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__2);
l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__3 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__3();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___lambda__1___closed__3);
l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__1 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__1);
l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__2 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__2();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__2);
l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__3 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__3();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__3);
l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__4 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__4();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Environment_displayStats___spec__6___closed__4);
l_Lean_Environment_displayStats___closed__1 = _init_l_Lean_Environment_displayStats___closed__1();
lean_mark_persistent(l_Lean_Environment_displayStats___closed__1);
l_Lean_Environment_displayStats___closed__2 = _init_l_Lean_Environment_displayStats___closed__2();
lean_mark_persistent(l_Lean_Environment_displayStats___closed__2);
l_Lean_Environment_displayStats___closed__3 = _init_l_Lean_Environment_displayStats___closed__3();
lean_mark_persistent(l_Lean_Environment_displayStats___closed__3);
l_Lean_Environment_displayStats___closed__4 = _init_l_Lean_Environment_displayStats___closed__4();
lean_mark_persistent(l_Lean_Environment_displayStats___closed__4);
l_Lean_Environment_displayStats___closed__5 = _init_l_Lean_Environment_displayStats___closed__5();
lean_mark_persistent(l_Lean_Environment_displayStats___closed__5);
l_Lean_Environment_displayStats___closed__6 = _init_l_Lean_Environment_displayStats___closed__6();
lean_mark_persistent(l_Lean_Environment_displayStats___closed__6);
l_Lean_Environment_displayStats___closed__7 = _init_l_Lean_Environment_displayStats___closed__7();
lean_mark_persistent(l_Lean_Environment_displayStats___closed__7);
l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__1 = _init_l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__1);
l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__2 = _init_l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__2);
l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__3 = _init_l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Environment_0__Lean_Environment_throwUnexpectedType___rarg___closed__3);
l_Lean_Environment_evalConstCheck___rarg___closed__1 = _init_l_Lean_Environment_evalConstCheck___rarg___closed__1();
lean_mark_persistent(l_Lean_Environment_evalConstCheck___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
