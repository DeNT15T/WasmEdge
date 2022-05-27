initSidebarItems({"enum":[["ImportObject","Defines three types of module instances that can be imported into a WasmEdge Store instance."]],"mod":[["types","Defines the WebAssembly primitive types."],["utils","Defines the versioning and logging functions."]],"struct":[["Compiler","Defines WasmEdge ahead-of-time(AOT) compiler and the relevant APIs."],["Config","Defines Config struct used to check/set the configuration options."],["Executor","Defines an execution environment for both pure WASM and compiled WASM."],["ExportType","Defines the types of the exported wasm values."],["FuncRef","Defines a reference to a host function."],["FuncType","Defines the type of a host function."],["Function","Defines a host function."],["Global","Defines a WebAssembly global variable, which stores a single value of the given type and a flag indicating whether it is mutable or not."],["GlobalType","Defines the type of a wasm global variable."],["ImportModule","An [ImportModule] represents a host module with a name. A host module consists of one or more host function, table, memory, and global instances,  which are defined outside wasm modules and fed into wasm modules as imports."],["ImportType","Defines the types of the imported wasm value."],["Instance","An [Instance] represents an instantiated module. In the instantiation process, An [Instance] is created from alModule. From an [Instance] the exported functions, tables, memories, and globals can be fetched."],["Loader","Loader is used to load WASM modules from the given WASM files or buffers."],["MemType","Defines the type of a wasm memory instance"],["Memory","Defines a WebAssembly memory instance, which is a linear memory described by its type. Each memory instance consists of a vector of bytes and an optional maximum size, and its size is a multiple of the WebAssembly page size (64KiB of each page)."],["Module","Defines compiled in-memory representation of an input WASM binary."],["Statistics","Struct of WasmEdge Statistics."],["Store","A [Store] represents all global state that can be manipulated by WebAssembly programs. It consists of the runtime representation of all instances of functions, tables, memories, and globals that have been allocated during the life time of the Vm."],["Table","A WasmEdge [Table] defines a WebAssembly table instance described by its type. A table is an array-like structure and stores function references."],["TableType","A WasmEdge [TableType] classifies a [Table] instance over elements of element types within a size range."],["Validator","Struct of WasmEdge Validator."],["Vm","A [Vm] defines a virtual environment for managing WebAssembly programs."],["WasiModule","A [WasiModule] is a module instance for the WASI specification."],["WasmEdgeProcessModule","A [WasmEdgeProcessModule] is a module instance for the WasmEdge_Process specification."],["WasmValue","Defines a WebAssembly value."]],"trait":[["AsInstance","The object as an module instance is required to implement this trait."],["Engine","The object that is used to perform a host function is required to implement this trait."],["ImportInstance","The object to be registered into a Vm or an Executor instance is required to implement this trait. The object that implements this trait can be registered via the Vm::register_wasm_from_import function, or the Executor::register_import_object function."]],"type":[["BoxedFn","Type alias for a boxed native function."]]});