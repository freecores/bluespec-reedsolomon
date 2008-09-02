.PHONY: clean tidy

BSC = bsc -u -aggressive-conditions -keep-fires -no-show-method-conf -show-compiles \
	-steps 1000000 +RTS -K4000M -RTS -show-schedule
SRC_DIR =
BSC_SYN = $(BSC) $(SRC_DIR) -elab -verilog 
BSC_SIM = $(BSC) $(SRC_DIR) -sim
BSC_NORMAL = $(BSC_SIM) 

%.bi: $(subst .bi,.bsv,$@)
	$(BSC_NORMAL) $(subst .bi,.bsv,$@)

mk%.ba: $(subst mk,,$(subst .ba,.bsv,$@))
	$(BSC_SIM) $(subst mk,,$(subst .ba,.bsv,$@))

mk%.v: $(subst mk,,$(subst .v,.bsv,$@))
	$(BSC_SYN) $(subst mk,,$(subst .v,.bsv,$@))

clean:
	rm -rf *.bi *.bo mk*.o module_*.o mk*.h module_*.h *.cxx schedule.o schedule.h mk*.v module_*.v *.ba a.out *.sim *.verilog *~ \#* *.sched

tidy:
	rm -rf *~ \#*


