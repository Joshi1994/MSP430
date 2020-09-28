################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
button.obj: ../button.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/CCS6/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armcl" -mv4 --code_state=32 --abi=ti_arm9_abi --include_path="C:/CCS6/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include" -g --diag_wrap=off --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="button.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

drawing.obj: ../drawing.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/CCS6/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armcl" -mv4 --code_state=32 --abi=ti_arm9_abi --include_path="C:/CCS6/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include" -g --diag_wrap=off --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="drawing.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

lcd.obj: ../lcd.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/CCS6/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armcl" -mv4 --code_state=32 --abi=ti_arm9_abi --include_path="C:/CCS6/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include" -g --diag_wrap=off --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="lcd.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

lcd_ge8.obj: ../lcd_ge8.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/CCS6/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armcl" -mv4 --code_state=32 --abi=ti_arm9_abi --include_path="C:/CCS6/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include" -g --diag_wrap=off --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="lcd_ge8.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

main.obj: ../main.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/CCS6/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armcl" -mv4 --code_state=32 --abi=ti_arm9_abi --include_path="C:/CCS6/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include" -g --diag_wrap=off --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="main.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

system.obj: ../system.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/CCS6/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armcl" -mv4 --code_state=32 --abi=ti_arm9_abi --include_path="C:/CCS6/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include" -g --diag_wrap=off --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="system.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


