/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */



@protocol SUManagerClientInterface
-(void)installDidFinish:(id)install;
-(void)installDidFail:(id)install withError:(id)error;
-(void)installDidStart:(id)install;
-(void)downloadDidFinish:(id)download;
-(void)downloadDidFail:(id)download withError:(id)error;
-(void)downloadProgressDidChange:(id)downloadProgress;
-(void)downloadDidStart:(id)download;
-(void)downloadWasInvalidatedForNewUpdateAvailable:(id)newUpdateAvailable;
-(void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)automaticDownload withError:(id)error;
-(void)scanDidCompleteWithNewUpdateAvailable:(id)scan error:(id)error;
-(void)scanRequestDidFinishForOptions:(id)scanRequest update:(id)update error:(id)error;
-(void)scanRequestDidStartForOptions:(id)scanRequest;
@end

