/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface MACAddress : XXUnknownSuperclass {
}
+(id)standardizeMACAddressString:(id)string wantUpperCase:(BOOL)aCase;
+(void)removeMACAddressSeparatorsFromString:(id)string;
+(BOOL)validMACAddressString:(id)string;
+(id)stringFromMACAddressData:(id)macaddressData;
+(id)macAddressDataFromString:(id)string;
+(BOOL)parseMACAddress:(const char*)address intoHexString:(char*)string;
@end
