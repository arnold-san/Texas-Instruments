################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
Ejemplos.obj: ../Ejemplos.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include" --include_path="c:/TI/TivaWare_C_Series-2.1.2.111" -g --gcc --define=ccs="ccs" --define=PART_TM4C1294NCPDT --diag_wrap=off --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="Ejemplos.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

tm4c1294ncpdt_startup_ccs.obj: ../tm4c1294ncpdt_startup_ccs.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include" --include_path="c:/TI/TivaWare_C_Series-2.1.2.111" -g --gcc --define=ccs="ccs" --define=PART_TM4C1294NCPDT --diag_wrap=off --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="tm4c1294ncpdt_startup_ccs.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

