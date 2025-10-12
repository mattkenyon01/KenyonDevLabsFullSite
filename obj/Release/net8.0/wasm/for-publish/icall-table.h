#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
181,
190,
191,
192,
193,
194,
195,
196,
198,
199,
259,
260,
261,
285,
286,
287,
300,
301,
302,
303,
390,
391,
392,
395,
428,
429,
431,
433,
435,
437,
442,
450,
451,
452,
453,
454,
455,
456,
457,
458,
546,
547,
612,
618,
621,
623,
628,
629,
631,
632,
636,
637,
639,
641,
642,
645,
646,
647,
650,
652,
655,
657,
659,
668,
731,
733,
735,
745,
746,
747,
749,
755,
756,
757,
758,
759,
767,
768,
769,
773,
774,
776,
778,
969,
1123,
1124,
6702,
6703,
6705,
6706,
6707,
6708,
6709,
6711,
6713,
6715,
6723,
6725,
6730,
6732,
6734,
6736,
6787,
6788,
6790,
6791,
6792,
6793,
6794,
6796,
6798,
7725,
7729,
7731,
7732,
7733,
7734,
7971,
7972,
7973,
7974,
7992,
7993,
7994,
7996,
8037,
8105,
8107,
8109,
8117,
8118,
8119,
8120,
8538,
8542,
8543,
8570,
8599,
8606,
8613,
8624,
8627,
8647,
8723,
8725,
8734,
8736,
8737,
8744,
8758,
8778,
8779,
8787,
8789,
8796,
8797,
8800,
8802,
8807,
8813,
8814,
8821,
8823,
8835,
8838,
8839,
8840,
8851,
8860,
8866,
8867,
8868,
8870,
8871,
8888,
8890,
8904,
8921,
8948,
8975,
8976,
9458,
9548,
9549,
9725,
9726,
9730,
9731,
9732,
9737,
9803,
10179,
10180,
10396,
10406,
11039,
11060,
11062,
11064,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 181,
ves_icall_System_Array_InternalCreate,
// token 190,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 191,
ves_icall_System_Array_CanChangePrimitive,
// token 192,
ves_icall_System_Array_FastCopy,
// token 193,
ves_icall_System_Array_GetLengthInternal_raw,
// token 194,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 195,
ves_icall_System_Array_GetGenericValue_icall,
// token 196,
ves_icall_System_Array_GetValueImpl_raw,
// token 198,
ves_icall_System_Array_SetValueImpl_raw,
// token 199,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 259,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 260,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 261,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 285,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 286,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 287,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 300,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 301,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 302,
ves_icall_System_Enum_InternalGetCorElementType,
// token 303,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 390,
ves_icall_System_Environment_get_ProcessorCount,
// token 391,
ves_icall_System_Environment_get_TickCount,
// token 392,
ves_icall_System_Environment_get_TickCount64,
// token 395,
ves_icall_System_Environment_FailFast_raw,
// token 428,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 429,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 431,
ves_icall_System_GC_SuppressFinalize_raw,
// token 433,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 435,
ves_icall_System_GC_GetGCMemoryInfo,
// token 437,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 442,
ves_icall_System_Object_MemberwiseClone_raw,
// token 450,
ves_icall_System_Math_Ceiling,
// token 451,
ves_icall_System_Math_Cos,
// token 452,
ves_icall_System_Math_Floor,
// token 453,
ves_icall_System_Math_Log10,
// token 454,
ves_icall_System_Math_Pow,
// token 455,
ves_icall_System_Math_Sin,
// token 456,
ves_icall_System_Math_Sqrt,
// token 457,
ves_icall_System_Math_Tan,
// token 458,
ves_icall_System_Math_ModF,
// token 546,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 547,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 612,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 618,
ves_icall_RuntimeType_make_array_type_raw,
// token 621,
ves_icall_RuntimeType_make_byref_type_raw,
// token 623,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 628,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 629,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 631,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 632,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 636,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 637,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 639,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 641,
ves_icall_System_RuntimeType_getFullName_raw,
// token 642,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 645,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 646,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 647,
ves_icall_RuntimeType_GetFields_native_raw,
// token 650,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 652,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 655,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 657,
ves_icall_RuntimeType_GetName_raw,
// token 659,
ves_icall_RuntimeType_GetNamespace_raw,
// token 668,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 731,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 733,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 735,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 745,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 746,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 747,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 749,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 755,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 756,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 757,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 758,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 759,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 767,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 768,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 769,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 773,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 774,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 776,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 778,
ves_icall_System_String_FastAllocateString_raw,
// token 969,
ves_icall_System_Type_internal_from_handle_raw,
// token 1123,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1124,
ves_icall_System_ValueType_Equals_raw,
// token 6702,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6703,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6705,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6706,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6707,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6708,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6709,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6711,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6713,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6715,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6723,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6725,
mono_monitor_exit_icall_raw,
// token 6730,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6732,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6734,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6736,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6787,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6788,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6790,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6791,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6792,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6793,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6794,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6796,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6798,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7725,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7729,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7731,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7732,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7733,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7734,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7971,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7972,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7973,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7974,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7992,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7993,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7994,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7996,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 8037,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8105,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8107,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 8109,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 8117,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8118,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8119,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8120,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8538,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8542,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8543,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8570,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8599,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8606,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8613,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8624,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8627,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8647,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8723,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8725,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8734,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8736,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8737,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8744,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8758,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8778,
ves_icall_reflection_get_token_raw,
// token 8779,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8787,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8789,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8796,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8797,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8800,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8802,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8807,
ves_icall_reflection_get_token_raw,
// token 8813,
ves_icall_get_method_info_raw,
// token 8814,
ves_icall_get_method_attributes,
// token 8821,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8823,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8835,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8838,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8839,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8840,
ves_icall_reflection_get_token_raw,
// token 8851,
ves_icall_InternalInvoke_raw,
// token 8860,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8866,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8867,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8868,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8870,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8871,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8888,
ves_icall_InvokeClassConstructor_raw,
// token 8890,
ves_icall_InternalInvoke_raw,
// token 8904,
ves_icall_reflection_get_token_raw,
// token 8921,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8948,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8975,
ves_icall_reflection_get_token_raw,
// token 8976,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9458,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9548,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9549,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9725,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9726,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9730,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 9731,
ves_icall_ModuleBuilder_getToken_raw,
// token 9732,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 9737,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9803,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10179,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10180,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10396,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10406,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11039,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11060,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11062,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11064,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
