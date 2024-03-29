/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@protocol CoreDAVPrincipalSearchPropertySetTaskDelegate;

@interface CoreDAVPrincipalSearchPropertySetTask : CoreDAVTask {
}
@property(assign, nonatomic) id<CoreDAVPrincipalSearchPropertySetTaskDelegate> delegate;	// @dynamic
-(void)finishCoreDAVTaskWithError:(id)error;
-(id)copyDefaultParserForContentType:(id)contentType;
-(id)requestBody;
-(id)httpMethod;
-(id)initWithURL:(id)url;
@end

