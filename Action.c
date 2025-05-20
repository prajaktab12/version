Blazedemo_01_LaunchURL()
{
	
	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_max_html_param_len("999999");

   /* web_reg_find("Search=All",
        "Text=200 OK",
        LAST); */
		
	lr_start_transaction("DPSOnly_TR01_Launch_Page");	
	
	web_url("{var_Environment}", 
		"URL=https://blazedemo.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		/*EXTRARES, 
		"Url={var_Protocol}://rep.checkpoint.com/rep-auth/service/v1.0/request", "Referer=", ENDITEM, */
		LAST);



	lr_end_transaction("DPSOnly_TR01_Launch_Page",LR_AUTO);
	
	return 0;
}
