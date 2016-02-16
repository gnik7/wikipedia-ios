
#import "WMFSelfSizingArticleListTableViewController.h"

@interface WMFReadMoreViewController : WMFSelfSizingArticleListTableViewController

@property (nonatomic, strong, readonly) MWKTitle* articleTitle;

- (instancetype)initWithTitle:(MWKTitle*)title dataStore:(MWKDataStore*)dataStore;

/**
 *  Idempotently fetch new results.
 *
 *  @return A promise which resolves to @c WMFRelatedSearchResults, which were either fetched from the network or results
 *          from a previous successful fetch.
 */
- (AnyPromise*)fetchIfNeeded;

- (BOOL)hasResults;

@end
