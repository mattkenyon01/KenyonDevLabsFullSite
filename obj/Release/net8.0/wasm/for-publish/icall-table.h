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
6694,
6695,
6697,
6698,
6699,
6700,
6701,
6703,
6705,
6707,
6715,
6717,
6722,
6724,
6726,
6728,
6779,
6780,
6782,
6783,
6784,
6785,
6786,
6788,
6790,
7717,
7721,
7723,
7724,
7725,
7726,
7963,
7964,
7965,
7966,
7984,
7985,
7986,
7988,
8029,
8097,
8099,
8101,
8109,
8110,
8111,
8112,
8530,
8534,
8535,
8562,
8591,
8598,
8605,
8616,
8619,
8639,
8715,
8717,
8726,
8728,
8729,
8736,
8750,
8770,
8771,
8779,
8781,
8788,
8789,
8792,
8794,
8799,
8805,
8806,
8813,
8815,
8827,
8830,
8831,
8832,
8843,
8852,
8858,
8859,
8860,
8862,
8863,
8880,
8882,
8896,
8913,
8940,
8967,
8968,
9450,
9540,
9541,
9717,
9718,
9722,
9723,
9724,
9729,
9795,
10171,
10172,
10388,
10398,
11031,
11052,
11054,
11056,
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
// token 6694,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6695,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6697,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6698,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6699,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6700,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6701,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6703,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6705,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6707,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6715,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6717,
mono_monitor_exit_icall_raw,
// token 6722,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6724,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6726,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6728,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6779,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6780,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6782,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6783,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6784,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6785,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6786,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6788,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6790,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7717,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7721,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7723,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7724,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7725,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7726,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7963,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7964,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7965,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7966,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7984,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7985,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7986,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7988,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 8029,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8097,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8099,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 8101,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 8109,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8110,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8111,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8112,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8530,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8534,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8535,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8562,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8591,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8598,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8605,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8616,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8619,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8639,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8715,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8717,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8726,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8728,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8729,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8736,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8750,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8770,
ves_icall_reflection_get_token_raw,
// token 8771,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8779,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8781,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8788,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8789,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8792,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8794,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8799,
ves_icall_reflection_get_token_raw,
// token 8805,
ves_icall_get_method_info_raw,
// token 8806,
ves_icall_get_method_attributes,
// token 8813,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8815,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8827,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8830,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8831,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8832,
ves_icall_reflection_get_token_raw,
// token 8843,
ves_icall_InternalInvoke_raw,
// token 8852,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8858,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8859,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8860,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8862,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8863,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8880,
ves_icall_InvokeClassConstructor_raw,
// token 8882,
ves_icall_InternalInvoke_raw,
// token 8896,
ves_icall_reflection_get_token_raw,
// token 8913,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8940,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8967,
ves_icall_reflection_get_token_raw,
// token 8968,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9450,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9540,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9541,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9717,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9718,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9722,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 9723,
ves_icall_ModuleBuilder_getToken_raw,
// token 9724,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 9729,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9795,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10171,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10172,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10388,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10398,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11031,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11052,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11054,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11056,
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
