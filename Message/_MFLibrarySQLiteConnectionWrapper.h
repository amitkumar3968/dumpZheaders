/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MFProtectedSQLiteConnection;

@interface _MFLibrarySQLiteConnectionWrapper : XXUnknownSuperclass {
@private
	MFProtectedSQLiteConnection* _connection;
	BOOL _writer;
	unsigned _refcount;
}
@property(readonly, assign, nonatomic) unsigned refcount;	// @synthesize=_refcount
@property(readonly, assign, nonatomic) BOOL writer;	// @synthesize=_writer
@property(readonly, assign, nonatomic) MFProtectedSQLiteConnection* connection;	// @synthesize=_connection
+(id)wrapperWithConnection:(id)connection forWriting:(BOOL)writing;
// declared property getter: -(unsigned)refcount;
// declared property getter: -(BOOL)writer;
// declared property getter: -(id)connection;
-(unsigned)decrementRefcount;
-(unsigned)incrementRefcount;
-(void)dealloc;
-(id)initWithConnection:(id)connection forWriting:(BOOL)writing;
@end

