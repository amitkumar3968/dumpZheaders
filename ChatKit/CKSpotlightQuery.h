/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "SPDaemonQueryDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SPSearchResultSection, NSObject, NSMutableDictionary, SPDaemonQueryToken;
@protocol OS_dispatch_group;

@interface CKSpotlightQuery : XXUnknownSuperclass <SPDaemonQueryDelegate> {
	SPDaemonQueryToken* _queryToken;
	unsigned _resultIndex;
	SPSearchResultSection* _searchResults;
	NSMutableDictionary* _chatGUIDToLatestSearchResult;
	NSObject<OS_dispatch_group>* _searchResultLoadingGroup;
	id _completion;
	BOOL _processing;
	BOOL _cancelled;
}
@property(copy, nonatomic) id completion;	// @synthesize=_completion
// declared property setter: -(void)setCompletion:(id)completion;
// declared property getter: -(id)completion;
-(void)searchDaemonQueryCompleted:(id)completed;
-(void)searchDaemonQuery:(id)query encounteredError:(id)error;
-(void)searchDaemonQuery:(id)query addedResults:(id)results;
-(void)dealloc;
-(id)initWithSearchText:(id)searchText completionBlock:(id)block;
-(void)_callCompletionIfNecessary;
-(void)_cleanup;
-(void)_processSearchResults;
-(void)cancel;
@end
