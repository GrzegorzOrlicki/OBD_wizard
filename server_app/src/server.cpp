while(1)
{
	incoming_command = CheckForIncomingCommands();
	switch (incoming_command)
	{
		case incoming_report:
			SaveInMemoryWithDateTimeTag();
			break;
		
		case report_download_request:
			CheckRequest();
			SendRequestedReportsToApp();
			break;

		default:
			ShowLog("Incorrect command.", Error);
			break;
	}
}