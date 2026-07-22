#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
191,
200,
201,
202,
203,
204,
205,
206,
208,
209,
271,
272,
273,
297,
298,
299,
312,
313,
314,
315,
402,
403,
404,
407,
440,
441,
443,
445,
447,
449,
454,
462,
463,
464,
465,
466,
467,
468,
469,
470,
558,
559,
624,
630,
633,
635,
640,
641,
643,
644,
648,
649,
651,
653,
654,
657,
658,
659,
662,
664,
667,
669,
671,
680,
743,
745,
747,
757,
758,
759,
761,
767,
768,
769,
770,
771,
779,
780,
781,
785,
786,
788,
790,
983,
1137,
1138,
6789,
6790,
6792,
6793,
6794,
6795,
6796,
6798,
6800,
6802,
6812,
6814,
6819,
6821,
6823,
6825,
6876,
6877,
6879,
6880,
6881,
6882,
6883,
6885,
6887,
7812,
7816,
7818,
7819,
7820,
7821,
8070,
8071,
8072,
8073,
8091,
8092,
8093,
8095,
8136,
8205,
8207,
8209,
8218,
8219,
8220,
8221,
8639,
8643,
8644,
8671,
8700,
8707,
8714,
8725,
8728,
8748,
8824,
8826,
8835,
8837,
8838,
8845,
8859,
8879,
8880,
8888,
8890,
8897,
8898,
8901,
8903,
8908,
8914,
8915,
8922,
8924,
8936,
8939,
8940,
8941,
8952,
8961,
8967,
8968,
8969,
8971,
8972,
8989,
8991,
9005,
9022,
9049,
9076,
9077,
9559,
9649,
9650,
9826,
9827,
9831,
9832,
9833,
9838,
9904,
10280,
10281,
10497,
10507,
11142,
11163,
11165,
11167,
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
// token 191,
ves_icall_System_Array_InternalCreate,
// token 200,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 201,
ves_icall_System_Array_CanChangePrimitive,
// token 202,
ves_icall_System_Array_FastCopy,
// token 203,
ves_icall_System_Array_GetLengthInternal_raw,
// token 204,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 205,
ves_icall_System_Array_GetGenericValue_icall,
// token 206,
ves_icall_System_Array_GetValueImpl_raw,
// token 208,
ves_icall_System_Array_SetValueImpl_raw,
// token 209,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 271,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 272,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 273,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 297,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 298,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 299,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 312,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 313,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 314,
ves_icall_System_Enum_InternalGetCorElementType,
// token 315,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 402,
ves_icall_System_Environment_get_ProcessorCount,
// token 403,
ves_icall_System_Environment_get_TickCount,
// token 404,
ves_icall_System_Environment_get_TickCount64,
// token 407,
ves_icall_System_Environment_FailFast_raw,
// token 440,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 441,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 443,
ves_icall_System_GC_SuppressFinalize_raw,
// token 445,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 447,
ves_icall_System_GC_GetGCMemoryInfo,
// token 449,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 454,
ves_icall_System_Object_MemberwiseClone_raw,
// token 462,
ves_icall_System_Math_Ceiling,
// token 463,
ves_icall_System_Math_Cos,
// token 464,
ves_icall_System_Math_Floor,
// token 465,
ves_icall_System_Math_Log10,
// token 466,
ves_icall_System_Math_Pow,
// token 467,
ves_icall_System_Math_Sin,
// token 468,
ves_icall_System_Math_Sqrt,
// token 469,
ves_icall_System_Math_Tan,
// token 470,
ves_icall_System_Math_ModF,
// token 558,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 559,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 624,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 630,
ves_icall_RuntimeType_make_array_type_raw,
// token 633,
ves_icall_RuntimeType_make_byref_type_raw,
// token 635,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 640,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 641,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 643,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 644,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 648,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 649,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 651,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 653,
ves_icall_System_RuntimeType_getFullName_raw,
// token 654,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 657,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 658,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 659,
ves_icall_RuntimeType_GetFields_native_raw,
// token 662,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 664,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 667,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 669,
ves_icall_RuntimeType_GetName_raw,
// token 671,
ves_icall_RuntimeType_GetNamespace_raw,
// token 680,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 743,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 745,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 747,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 757,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 758,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 759,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 761,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 767,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 768,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 769,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 770,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 771,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 779,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 780,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 781,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 785,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 786,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 788,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 790,
ves_icall_System_String_FastAllocateString_raw,
// token 983,
ves_icall_System_Type_internal_from_handle_raw,
// token 1137,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1138,
ves_icall_System_ValueType_Equals_raw,
// token 6789,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6790,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6792,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6793,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6794,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6795,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6796,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6798,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6800,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6802,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6812,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6814,
mono_monitor_exit_icall_raw,
// token 6819,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6821,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6823,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6825,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6876,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6877,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6879,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6880,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6881,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6882,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6883,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6885,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6887,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7812,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7816,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7818,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7819,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7820,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7821,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8070,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8071,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8072,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8073,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8091,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8092,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8093,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8095,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 8136,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8205,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8207,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 8209,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 8218,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8219,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8220,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8221,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8639,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8643,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8644,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8671,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8700,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8707,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8714,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8725,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8728,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8748,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8824,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8826,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8835,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8837,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8838,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8845,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8859,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8879,
ves_icall_reflection_get_token_raw,
// token 8880,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8888,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8890,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8897,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8898,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8901,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8903,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8908,
ves_icall_reflection_get_token_raw,
// token 8914,
ves_icall_get_method_info_raw,
// token 8915,
ves_icall_get_method_attributes,
// token 8922,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8924,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8936,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8939,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8940,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8941,
ves_icall_reflection_get_token_raw,
// token 8952,
ves_icall_InternalInvoke_raw,
// token 8961,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8967,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8968,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8969,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8971,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8972,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8989,
ves_icall_InvokeClassConstructor_raw,
// token 8991,
ves_icall_InternalInvoke_raw,
// token 9005,
ves_icall_reflection_get_token_raw,
// token 9022,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9049,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9076,
ves_icall_reflection_get_token_raw,
// token 9077,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9559,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9649,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9650,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9826,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9827,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9831,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 9832,
ves_icall_ModuleBuilder_getToken_raw,
// token 9833,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 9838,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9904,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10280,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10281,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10497,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10507,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11142,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11163,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11165,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11167,
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
