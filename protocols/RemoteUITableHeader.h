/* Generated by RuntimeBrowser.
 */

@protocol RemoteUITableHeader <NSObject>

@required

- (float)headerHeightForWidth:(float)arg1 inTableView:(UITableView *)arg2;
- (id)initWithAttributes:(NSDictionary *)arg1;
- (void)setSectionIsFirst:(BOOL)arg1;

@optional

- (void)setDelegate:(id <RUITableHeaderDelegate>)arg1;
- (void)setDetailText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (void)setIconImage:(UIImage *)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSubHeaderText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (void)setText:(NSString *)arg1 attributes:(NSDictionary *)arg2;

@end
