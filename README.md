|**Serial Number**|**Description**|**Expected Input**|**Expected Output**|**Actual Out**|**Type of Test**|
| :- | :- | :- | :- | :- | :- |
|1|Door lock/unlock|Door is open|Buzzer in the car should start buzzing|GPIO Pin PD 14 is reset and the buzzer connected to the discovery board start buzzing|Requirement based|
|2|Door lock/unlock|Door is close|Buzzer in the car is silent.|GPIO Pin PD 14 is set and the buzzer connected to the discovery board is silent|Requirement based|
|3|Power window|Window is open|Led in the car starts glowing.|GPIO PIN PD 13 is set and the green LED on the discovery board glows.|Requirement based|
|4|Power window|Window is close|Led in the car is off.|GPIO PIN PD 13 is reset and the green LED on the discovery board stops glowing.|Requirement based|

