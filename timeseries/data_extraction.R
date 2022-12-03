### Time series data

# libraries
library(tidyverse)
library(data.table)
rm(list = ls())

output_path <- "~/Desktop/Work/Github/Books-and-Courses/timeseries/_data"
setwd(output_path)

## Air Passenger Bookings
data(AirPassengers)
airpassenger <- AirPassengers %>% as.data.table(keep.rownames = TRUE)
write.csv(x = AirPassengers, file = paste0(output_path, "airpassengers.csv"), col.names = TRUE, row.names = TRUE)

## Lynx trappings
data(lynx)
lynx_data <- as.data.frame(lynx)


## LH
data("lh")
write.csv(x = lh, file = paste0(output_path, "lh.csv"), col.names = TRUE, row.names = TRUE)


## Swiss Market Index
data(EuStockMarkets)
EuStockMarkets <- data.frame(as.matrix(EuStockMarkets), time = time(EuStockMarkets))  # convert ts to dataframe
write.csv(x = EuStockMarkets, file = paste0(output_path, "EuStockMarkets.csv"))



smi <- ts(EuStockMarkets, start=start(EuStockMarkets), freq=frequency(EuStockMarkets))


