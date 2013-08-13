/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SUDownloadPolicyFactory : XXUnknownSuperclass {
}
+(int)downloadPolicyTypeForClass:(id)aClass;
+(id)downloadPolicyForType:(int)type forDescriptor:(id)descriptor;
+(id)userDownloadPolicyForDescriptor:(id)descriptor;
+(id)userDownloadPolicyForDescriptor:(id)descriptor existingPolicy:(id)policy;
+(id)_userDownloadPolicyFromCurrentPolicy:(id)currentPolicy descriptor:(id)descriptor networkMonitor:(id)monitor;
@end

